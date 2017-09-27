#ifndef _VIRTUAL_MEMORY_H_
#define _VIRTUAL_MEMORY_H_

#include <stdlib.h>

#include "argument.h"

typedef struct {
    int* int32;

    // FLAGS
    int equal;
    int greater;

    // required for division
    int remainder;
    int quotient;
} memory;

memory* create_memory(size_t size);
void destroy_memory(memory* mem);

// convert argument to address
inline int* arg_to_addr(memory* mem, argument* arg);

#endif
