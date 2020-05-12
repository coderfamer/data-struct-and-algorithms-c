#include <stdio.h>
#include <stdlib.h>

#include "sq_stack.h"


bool InitStack(SqStack *s)
{
    s->base = (void *)malloc(STACK_INIT_SIZE * sizeof(void));
    if (!s->base) exit(-1);
    s->top = s->base;
    s->stacksize = STACK_INIT_SIZE;
    return OK;
}




