
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
    else{
        s->top++;
        s->a[s->top]=x;
    }
}

void pop(stack*s){
    int x;
    if(s->top==-1){
        printf("Stack underflow");
    }
    else{
       x= s->a[s->top];
        s->top--;
    }

}
    void display(stack*s){
        printf("[  ");
        for(int i=s->top;i>=0;i--){
            printf("%d ", s->a[i]);
        }
        printf(" ]");
    }
    void peek(stack*s){
        printf("\n%d",s->a[s->top]);
    }


    int main(){
        int ch,ele;
        stack s;
        s.top=-1;
        while(1){
        printf("\n");
        printf("\n MENU \n");
        printf("------------------\n");
        printf(" 1.Push \n 2.Pop \n 3. Display \n 4.Peek\n 5.Exit \n");
        printf("------------------\n");
        printf("\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: 
            printf("Enter your element: ");
            scanf("%d",&ele);
            push(&s,ele);
            break;

            case 2:
            pop(&s);
            break;

            case 3:
            display(&s);
            break;

            case 4:
            peek(&s);
            break;

            case 5:
            break;
            
            default:
            printf("Invalid choice");
        
        }

    }
    }