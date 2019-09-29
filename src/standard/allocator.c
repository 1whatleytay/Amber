#include <standard/allocator.h>

#include <kernel/kernel.h>

#include <stdint.h>

void *malloc(uintptr_t size) {
    (void)size;

    return nullptr;
}

void free(void *ptr) {
    (void)ptr;
}

bool amberInitAllocator(struct AmberState *amber) {
    (void)amber;

    return true;
}
