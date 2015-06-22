#include<stdio.h>
#define MAXSIZE 3

struct stack
{
    int top;
    int elements[MAXSIZE];

};

typedef struct stack Stack;

Stack myStack;

int main()
{
    int ch;
    myStack.top=-1;
    int choice,value;
    int errocode;

    do
    {
        printf(" 1. POP \n 2.PUSH \n 3.DISPLAY \n 4.EXIT \n");
        scanf("%d",&ch);


        switch(ch)
        {
        case 1:
        {

            printf("I AM TRYING TO POP \n");
            pop();

            break;
        }
        case 2:
            {

            printf("ENTER THE INTEGER YOU WANT PUSH");
            scanf("%d",&value);
            printf(" I AM TRYING TO PUSH \n");
            push(value);
            break;
        }

        case 3:
        {
            printf("I AM TRYING TO DISPLAY \n");
            display();
            break;
        }
        case 4:
            return 0;
            break;

        default :
            printf("INCORRECT CHOISE \n");
            break;
        }

    }
    while(ch!=4);
    return 0;
}
int pop(int* errocode)
{
    if(myStack.top<0){

        *errocode=-1;
    }

    int value=myStack.elements[myStack.top];
    myStack.top--;

    return value;
}


int push ( int value,int* errocode)
{
    if(myStack.top>=MAXSIZE-1){

     *errocode=-1;
    }
    myStack.top++;
    myStack.elements[myStack.top]=value;
    return 1;
}

void display()
{int i;
if(myStack.top<0){
    printf("stack is empty");
}
else{
    printf("stack elements \n");
    for (i=myStack.top;i>=0;i--){
        printf("\n \n %d",myStack.elements[i]);
    }
}

}
