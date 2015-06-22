//10 20 20 5 30 5

#include<stdio.h>
int main(){
int arr[7]={10,20,20,5,30,5},arr2[10];
int i,j,k=0;
for(i=0;i<7;i++){
    for(j=i+1;j<7;j++){
        if(arr[i]==arr[j]){
            arr2[k++]=arr[i];
        }
    }
}
printf("the second repeatition is %d",arr2[1]);
printf("\n \n the first repeatation is %d",arr2[0]);
return 0 ;
}
