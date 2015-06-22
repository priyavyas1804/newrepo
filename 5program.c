#include<stdio.h>

struct linkedList{
int value;
struct linkedList *next;
};

typedef struct linkedList LINKEDLIST;
 LINKEDLIST *head;
 LINKEDLIST *tail;

void insert(int);
int main(){

   int ch,value,value2;
    do{
        printf("1.DISPLAY \n 2.INSERT \n 3.FETCH \n 4.EXIT");
        scanf("%d",&ch);

        switch(ch){
        case 1:  {
                 printf(" GOING TO DISPLAY");
                 //dispaly();

                 }
                 break;

        case 2: {
                 printf("ENTER THE ELEMENT YOU WANT TO INSERT");
                 scanf("%d",&value);
                 printf("GOING TO INSERT");
                 insert(value);
                }
                break;


        case 3: {
                 printf(" ENTER THE ELEMENT YOU WANT TO FETCH");
                 scanf("%d",&value);
                 printf("GOING TO FETCH");
                 //value2=fetch(value);

                }
                break;

        case 4: {
                printf("GOING TO EXIT");
                return 0;
                }
                break;

         default: printf("INVALID CHOOISE");
                  break;

    }
    }while(ch!=4);

     return 0;






   // LINKEDLIST firsElement;
    //firstElent.value=10;

    //head=&firstElement;
    //tail=&firstElement

    //LINKEDLIST secondElement;
    //secondElement.value=20;
    //*tail.next=&secondElement;

     //tail=&secondElement;

}

void insert (int element){
   if(head==NULL){
    LINKEDLIST block;
    block.value=element;

     head=&block;
     tail=&block;
   }else{
        LINKEDLIST block2;
        block2.value=element;
        (*tail).next=&block2;

        tail=&block2;
   }
}

void dispaly()
{
 int i;
 for(i=0)

}


