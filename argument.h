#ifndef _ARGUMENT_H_
#define _ARGUMENT_H_

#define MAX_ARGS 2

#define ARG_TYPE_ADDRESS 1
#define ARG_TYPE_VALUE 2
#define ARG_TYPE_LABEL 3

typedef struct {
    int type;
    int value;
} argument;

#endif
