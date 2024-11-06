#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_LEN 10000
#define RANGE 100
int main() {
    int numbers[MAX_LEN]={ 0 };

    int size = 0;
    scanf("%d",&size);

    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        numbers[i] = rand()%RANGE;
    }

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    //print the original array
//binary-search
    for (int i = 0; i < size; i++) {
        int key = numbers[i];
        int low = 0;
        int high = i - 1;

        while(low<=high) {
            int mid = (low + high) / 2;
            if(key < numbers[mid]) {
                high = mid - 1;
            }else if(key >=numbers[mid]) {
                low = mid + 1;//safety
            }
        }

        for(int j=i-1;j>=low;j--) {
            numbers[j+1] = numbers[j];
        }
        numbers[low] = key;
    }

//    for( int i = 1; i < size; i++) {
//       int key = numbers[i];
//        for (int j = i-1; j >=0; j--) {
//           if(key < numbers[j]) {
//                numbers[j+1] = numbers[j];
//               // numbers[j] = key;
 //           }
//            numbers[j] = key;
 //       }

  //  }
    //print the arranged array
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}
