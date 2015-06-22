#include<stdio.h>
int main(){
int arr[7]={10,20,20,5,30,5,10},arr2[7],min,count=0;
int i,j,k=0;
for(i=0;i<7;i++){
  for(j=i+1;j<7;j++){
  if(arr[i]==arr[j]){

  }
  count++;
  }
  arr2[k++]=count;
}
min=arr2[0];
 for(k=0;k<7;k++){
    if(arr2[k]<min){
        min=arr2[i];
    }
 }
 printf(" the second repetation is %d",min);
}
