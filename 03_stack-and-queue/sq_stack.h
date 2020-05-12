#ifndef SQ_STACK_H
#define SQ_STACK_H

#include <stdbool.h>

#define OK 1
#define ERROR -1


#define STACK_INIT_SIZE 100
#define STACKINCREMENT 10

typedef struct {
    void *  base;   //
    void *  top;    //栈顶指针
    int stacksize;  //已经分配的内存空间，以元素个数表示
}SqStack;


bool InitStack(SqStack *s);
bool DestroyStack(SqStack *s);
bool ClearStack(SqStack *s);
bool StackEmpty(SqStack *s);
int StackLength(SqStack *s);
bool GetTop(SqStack *s, void *elem);
bool Push(SqStack *s, void *elem);
bool pop(SqStack *s, void *elem);


#endif