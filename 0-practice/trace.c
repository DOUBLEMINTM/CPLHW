#include <stdio.h>
#define size 55
#include <stdbool.h>

int main() {
    int n,m,x,y;
    scanf("%d %d %d %d",&n,&m,&x,&y);
    char map[size][size];
    for(int i=0;i<size;i++) {
        for(int j=0;j<size;j++) {
            map[i][j]='_';
        }
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=m;j++) {
            scanf(" %c",&map[i][j]);
        }
        getchar();
    }

    int pos[size*size][2]={0};
    bool vis[size][size]={false};
    vis[x][y]=true;
    int count=1;
    pos[0][0]=x;
    pos[0][1]=y;
    int i=1;
    bool is_found = true;
    while(is_found) {
        is_found=false;
        if(map[x+1][y]=='#'&&vis[x+1][y]==false) {
            count++;
            pos[i][0]=x+1;
            pos[i][1]=y;
            vis[x+1][y]=true;
            i++;
            x++;
            is_found=true;
        }else if(map[x][y+1]=='#'&&vis[x][y+1]==false) {
            count++;
            pos[i][0]=x;
            pos[i][1]=y+1;
            vis[x][y+1]=true;
            i++;
            y++;
            is_found=true;
        }else if(map[x-1][y]=='#'&&vis[x-1][y]==false) {
            count++;
            pos[i][0]=x-1;
            pos[i][1]=y;
            vis[x-1][y]=true;
            i++;
            x--;
            is_found=true;
        }else if(map[x][y-1]=='#'&&vis[x][y-1]==false) {
            count++;
            pos[i][0]=x;
            pos[i][1]=y-1;
            vis[x][y-1]=true;
            i++;
            y--;
            is_found=true;
        }
    }
    printf("%d\n",count);
   for(int j=0;j<i;j++) {
       printf("%d %d\n",pos[j][0],pos[j][1]);
   }
    return 0;
}
