#include<stdio.h>
#define SIZE 20
int main() {
    //input numbers to an arr
    int arr[SIZE]={0};
    int size=0,temp;
    //size:the actual size of the number arr.
    printf("enter the elements of the array:");
    while(scanf("%d",&arr[++size])!=EOF);
    //for any int a and b in the arr,place the smaller one ahead
    for(int i=0;i<size-1;i++) {
        for(int j=i;j<size;j++) {
            if(arr[i]>=arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //printf the reasonable arr
    for(int i=0;i<size;i++) {
        printf("%d ",arr[i]);
    }
}
//bubble sort:从第一个数开始每两个数相比较，大的向后换，第一次将最大的换至最后，
//第二次将第二大的放置倒数第二位置，，以此类推
//version 2
/*
 * for(int i = 0; i<len-1 ;i++){
 *    for(int j = 0 ; j<len-1-i ; j++){
 *      if(arr[j] > arr[j+1]){
 *          int temp = arr[j];
 *          arr[j] = arr[j+1];
 *          arr[j+1] = temp;
 *      }
 *    }
 * }
 * i做计数器，表示只需做len-1次排序，每轮排序都排到
 * len-1-i前，因为大的已经按顺序固定在末尾了
 *
 */
//selection sort
//从第一个开始，每次遍历之后的数字并找到最小的那个，将当前项替换为最小值，重复此过程
/*
 * for(int i = 0 ; i < len ; i++){
 *   int min = arr[i];
 *   int min_index = i;
 *
 *   for(int j = i + 1； j < len ; j++){
 *      if(arr[j] < min){
 *          min = arr[j];
 *          min_index = j;
 *      }
 *   }
 *   //swap arr[i] and arr[min_index]
 *   int temp = arr[i];
 *   arr[i] = arr[min_index];
 *   arr[min_index] = temp;
 *   }
 *