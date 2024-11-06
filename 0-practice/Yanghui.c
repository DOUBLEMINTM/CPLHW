#include <stdio.h>
#include <string.h>
int rows;
int main(){
  scanf("%d",&rows);
  int now_row[25]={0};
  now_row[0]=1;
  for(int i=0 ; i<rows ; i++){
    int new_row[25]={0};
    memcpy(new_row,now_row,sizeof(now_row));
        for(int j = 1; j<=i ; j++){
          now_row[j]=new_row[j]+new_row[j-1];
        }
       for(int k=0 ; k<=i ; k++){
         printf("%d ",now_row[k]);
       }
       printf("\n");
 }
  return 0;
}
