
#include <stdio.h>
#include <stdlib.h>

#define N 20

typedef struct Stack{
    int a[N];
    int top;
}stack;

void push(stack*s,int x){
    if(s->top==N-1){
        printf("Stack Overflow");
    }
}
