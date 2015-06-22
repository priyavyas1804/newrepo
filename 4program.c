#include<stdio.h>
#define MAXSIZE 3

struct stack{
   int top;
   int elements[MAXSIZE];
};


typedef struct stack Stack;

int main()
{
    int ch;
    Stack* myStack;
    myStack->top=-1;
    int choice,value;
    int errocode;

    do{
        printf("1.POP \n 2.PUSH \n 3.DISPLAY \n 4.EXIT");
        scanf ("%d ",&ch);
        switch (ch){
        case 1: {
                printf("ENTER THE ELEMENT YOU WANT TO PUSH");
                scanf("%d",&value);
                printf(" I AM TRYING TO PUSH.................................");
                push(&myStack,value);
                }
                break;

        case 2: {
                printf("I AM TRYIMG TO POP........................................");
                pop();
                }
                break;

        case 3: {
                printf("I AM TRYING TO DISPLAY...................................");
                display(&myStack);
                }
                break;

        case 4: {printf("EXITING...................................................");
                 return 0;
                 }
                 break;

        default: printf("INVALID INPUT");
                 break;



}

    }while(ch!=4);


 return 0;
}



int pop(int &mystack,int* errocode){
    if(myStack->top>0){
        *errocode=-1;
    }
    int value=*myStack->elements[myStack->top];
    myStack->top--;

    return value;
}




























