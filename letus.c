#include<stdio.h>

 void main(){
 int salary;
 float da,hr,gs;
 printf("ENTER THE SALARY");
 scanf("%d",&salary);
 da=(40*salary)/100;
 hr=(20*salary)/100;
 gs=salary-da-hr;
 printf("\n THE GROSS SALARY IS : %f",gs);

 }
