#include <stdio.h>

#define len 10
const int arr[len]={1,1,2,3,5,8,13,21,34,55};
int BinarySearch();
int main() {
    int key;
    scanf("%d",&key);
    BinarySearch(key);
    if(BinarySearch(key))
        printf("%d",BinarySearch(key));
    else  printf("Not Found");
}
int BinarySearch(int key) {
    int low=0,high=len-1,mid=0;
    while(low<=high) {
        mid=low+(high-low)/2;
        if(key<arr[mid]) {
            high = mid - 1;
        }else if(key > arr[mid]) {
            low = mid + 1;
        }else return mid+1;
    }
    return 0;
}