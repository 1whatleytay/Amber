#ifndef AMBER_ALLOCATOR_H
#define AMBER_ALLOCATOR_H

#include <kernel/util.h>
#include <kernel/kernel.h>

#include <stdint.h>

void *malloc(uintptr_t size);

void free(void *pointer);

bool amberInitAllocator(struct AmberState *state);

#endif //AMBER_ALLOCATOR_H
