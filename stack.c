#include <stdlib.h>
#include "stack.h"

stack* create_stack() {
    stack* s;

    s = (stack*)malloc(sizeof(stack));

    s->items = NULL;
    s->num_items = 0;

    return s;
}

// TODO: rewrite this stack yo
void stack_pop(stack* s, int* dest) { // int* dest == out (in C#)
    *dest = s->items[s->num_items - 1];

    s->num_items--;
    // TODO: try realloc(--s->num_items)
    s->items = (int*)realloc(s, --s->num_items);
}


void stack_push(stack* s, int* item) {
    s->num_items++;
    s->items = (int*)realloc(s->items, s->num_items);

    s->items[s->num_items - 1] = *item;
}

void destroy_stack(stack* s) {
    if (s->items) {
        free (s->items);
    }
    free(s);
}


