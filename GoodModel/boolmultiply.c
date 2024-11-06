#include <stdio.h>

//NOT MY CODES ,from Yuli
//three pigs problem
//excellent multiplication involved bool type
int main() {
    int T, x;
    scanf("%d %d", &T, &x);
    while (T--) {
        int n, arr[20][20] = {0}, vic[6] = {0};
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++) scanf("%d", &arr[i][j]);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                //3 for-statement to check each none-zero piece on the board
                //k : for a certain piece , check the four directions once a time
                //complex logic (if one of m,p,q,r is not 1,that means one of the-
                //-condition fails,that means for k in range 0 to x-1,every arr[i][k+j]
                //==arr[i][j],so that condition keeps m(or p,q,r)=0
                if (!arr[i][j]) continue;
                int m = 0, p = 0, q =0, r = 0;
                for (int k = 0; k < x; k++) {
                    //
                    //CORE SKILL
                    //
                    //USE multiplication with bool-type included
                    //so that if the bool(the condition statement returns) is ture,
                    //it returns 1,else it is false,so we multiply 0
                    if(arr[i][k + j] * (k + j < n)!=arr[i][j]) m=1;
                    if(arr[k + i][j] * (k + i < n)!=arr[i][j])p=1;
                    if(arr[k + i][k + j] * (k + i < n && k + j < n)!=arr[i][j]) q=1;
                    if(arr[i - k][j + k] * (i - k >= 0 && j + k < n)!=arr[i][j]) r=1;
                }
                if (m+p+q+r!=4) vic[arr[i][j]] = 1;
            }
        }

        if (!vic[1] && vic[2] && !vic[4]) puts("2");
        else if (vic[1] && !vic[2] && !vic[4]) puts("1");
        else if (!vic[1] && !vic[2] && vic[4]) puts("4");
        else puts("draw");
    }
}