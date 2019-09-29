#ifndef AMBER_TERMINAL_H
#define AMBER_TERMINAL_H

#include <kernel/util.h>
#include <kernel/kernel.h>

#define MAKE_TERMINAL_COLOR(foreground, background) background << 4u | foreground

enum TerminalColor {
    TerminalBlack,
    TerminalBlue,
    TerminalGreen,
    TerminalCyan,
    TerminalRed,
    TerminalMagenta,
    TerminalBrown,
    TerminalLightGray,
    TerminalDarkGray,
    TerminalLightBlue,
    TerminalLightGreen,
    TerminalLightCyan,
    TerminalLightRed,
    TerminalLightMagenta,
    TerminalLightBrown,
    TerminalWhite,
};

extern void puts(const char *text);

extern bool amberInitTerminal(struct AmberState *amber);

#endif //AMBER_TERMINAL_H
