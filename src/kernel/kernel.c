#include <kernel/kernel.h>

#include <standard/allocator.h>
#include <standard/terminal.h>

bool amberInitState(struct AmberState *amber) {
    if (!amberInitAllocator(amber))
        return false;
    if (!amberInitTerminal(amber))
        return false;

    return true;
}
