#ifndef AMBER_KERNEL_H
#define AMBER_KERNEL_H

#include <kernel/util.h>

typedef struct {
    uint32_t column;
    uint32_t row;
    uint8_t color;
} AmberTerminal;

typedef struct {

} AmberAllocator;

struct AmberState {
    AmberTerminal terminal;
    AmberAllocator allocator;
};

extern bool amberInitState(struct AmberState *amber);

#endif //AMBER_KERNEL_H
