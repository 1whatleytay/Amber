#include <standard/terminal.h>

#include <kernel/kernel.h>

static const uint32_t terminalWidth = 80;
static const uint32_t terminalHeight = 25;
static const uint8_t terminalColor = MAKE_TERMINAL_COLOR(TerminalRed, TerminalBlack);
static uint16_t *const terminalBuffer = (uint16_t *) 0xB8000;

static uint64_t strlen(const char *text) {
    uint64_t size = 0;

    while (text[size] != '\0')
        size++;

    return size;
}

static void putCharacter(struct AmberState *amber, char c) {
    if (c == '\n') {
        amber->terminal.column = 0;
        amber->terminal.row++;
    }

    terminalBuffer[amber->terminal.row * terminalWidth + amber->terminal.column] =
        terminalColor << 8u | c;

    if (c != '\n')
        amber->terminal.column++;
    if (amber->terminal.column == terminalWidth)
        amber->terminal.row++;

    amber->terminal.column %= terminalWidth;
    amber->terminal.row %= terminalHeight;
}

void puts(const char *text) {
    struct AmberState *amber = amberGet();

    uint32_t textLength = strlen(text);
    for (uint64_t a = 0; a < textLength; a++) {
        putCharacter(amber, text[a]);
    }
}

bool amberInitTerminal(struct AmberState *amber) {
    amber->terminal.column = 0;
    amber->terminal.row = 0;
    amber->terminal.color = terminalColor;

    for (uint32_t a = 0; a < terminalWidth * terminalHeight; a++) {
        putCharacter(amber, ' ');
    }

    return true;
}
