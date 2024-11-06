//
// Created by Zeto on 24-10-10.
//
#include<stdio.h>
#define SIZE 100005
int main() {
   //input numbers to an arr

   int arr[SIZE]={0};
   int size=0;
   //size:the actual size of the number arr.
   printf("enter the size of the array:");
   scanf("%d",&size);
   printf("enter the elements of the array:");
   for(int i=0;i<size;i++) {
      scanf("%d",&arr[i]);
   }
   //for any int a and b in the arr,place the smaller one ahead
   for(int i=0;i<size;i++) {
      int min=arr[i];
      int index=i;
      //find the minimum
      for(int j=i+1;j<size;j++) {
         if(arr[j]<min) {
            min=arr[j];
            index = j;
         }
      }
      int temp=arr[i];
      arr[i]=arr[index];
      arr[index]=temp;
   }
   //printf the reasonable arr
   for(int i=0;i<size;i++) {
      printf("%d ",arr[i]);
   }
}

