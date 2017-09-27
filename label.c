#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "label.h"

label* create_label(char* name, int* instruction) {
    label* l = (label*)malloc(sizeof(label));
    
    l->name = (char*)malloc(strlen(name));
    strcpy(l->name, name);

    l->instruction = *instruction;

    return l;
}

void destroy_label(label* l) {
    if (l->name) free (l->name);
    free (l);
}


