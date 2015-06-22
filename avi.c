#include<stdio.h>
#include<conio.h>
int main()
{
 int number[20]={200,200,37,5,45,30};
 int max,max2;
 int i;
 if (number[0]>number[1]){
    max=number[0];
    max2=number[1];
 }else{
     max=number[1];
     max2=number[0];

 }

 for( i=0;number[i]!='\0';i++){
    if(max==max2){
        max2=number[i];
    }
    if(number[i]>max){
        max2=max;
        max=number[i];
    }
    else if(number[i]!=max&& number[i]>max2){
        max2=number[i];
    }




 }



 printf("the highest number is %d and second highest is %d",max,max2);
 return 0;
 }
