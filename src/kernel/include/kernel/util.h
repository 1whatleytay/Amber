#ifndef AMBER_UTIL_H
#define AMBER_UTIL_H

#include <stdint.h>
#include <stdbool.h>

#ifndef __cplusplus
#define nullptr ((void *)0)
#endif

struct AmberState;
struct AmberState *amberGet(void);

#endif //AMBER_UTIL_H
