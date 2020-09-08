#include <stdio.h>
#include <stdlib.h>

void main(){
     int arr[20],nums,i,j,temp;
   printf("Enter amount of nums: ");
   scanf("%d",&nums);
   printf("Enter %d Numbers: ",nums);
   for(i=0;i<nums; i++)
       scanf("%d",&arr[i]);
   for(i=0;i<nums;i++){
       for(j = 0;j<nums-i;j++){
           if(arr[j]<arr[j+1]){
               temp = arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
           }
       }
   }
   printf("Sort in descending Order: ");
   for(i=0; i<nums+1; i++){
       printf("%d",arr[i]);
       printf("\n");
   }
}
