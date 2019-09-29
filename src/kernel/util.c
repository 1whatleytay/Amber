#include <kernel/util.h>

#include <kernel/kernel.h>

struct AmberState state;

struct AmberState *amberGet(void) {
    return &state;
}
