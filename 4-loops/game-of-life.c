#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#define SIZE 6
#define turns 10
//this is the board
const int board[SIZE][SIZE] = {
    [1][1] = 1, [1][2] = 1,
    [2][1] = 1, [2][2] = 1,
    [3][3] = 1, [3][4] = 1,
    [4][3] = 1, [4][4] = 1
};

void ExtendBoard(int old_board[][SIZE+2],const int board[][SIZE]);
void PrintExtendedBoard(int old_board);
void SleepAndClear(int sec);
void SetNewBoard(int old_board[][SIZE+2],int new_board[][SIZE+2]);
int main() {
    //expand this board to be the old_board
    int old_board[SIZE + 2][SIZE + 2] = {0};
    ExtendBoard(old_board,board);
    //print the old_board
    PrintExtendedBoard(old_board);
    SleepAndClear(900);

    //apply the rules
    int new_board[SIZE + 2][SIZE + 2] = {0};

    SetNewBoard(old_board,new_board);
        //print the new board
        for (int i = 1; i <= SIZE; i++) {
            for (int j = 1; j <= SIZE; j++) {
                //old_board[i][j]=new_board[i][j];
                printf("%c ", new_board[i][j] ? '*' : ' ');
            }
            printf("\n");
        }

        SleepAndClear(900);

        for (int i = 1; i <= SIZE; i++) {
            for (int j = 1; j <= SIZE; j++) {
                old_board[i][j] = new_board[i][j];
            }
        }
    return 0;
    }

void ExtendBoard(int old_board[][SIZE+2],
    const int board[][SIZE]) {
    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++) {
            old_board[i][j] = board[i - 1][j - 1];
        }
    }
}
void PrintExtendedBoard(int old_board[][SIZE+2]) {
    for (int i = 1; i <= SIZE; i++) {
        for (int j = 1; j <= SIZE; j++) {
            printf("%c ", old_board[i][j] ? '*' : ' ');
        }
        printf("\n");
    }
}
void SleepAndClear(int sec) {
    Sleep(sec);
    system("cls");
}
void SetNewBoard(int old_board[][SIZE+2],int new_board[][SIZE+2]) {
    for (int i = 1; i < turns; ++i) {
        for (int i = 1; i <= SIZE; i++) {
            for (int j = 1; j <= SIZE; j++) {
                int num_of_live_neighbors =
                        old_board[i - 1][j - 1] +
                        old_board[i - 1][j] +
                        old_board[i - 1][j + 1] +
                        old_board[i][j - 1] +
                        old_board[i][j + 1] +
                        old_board[i + 1][j - 1] +
                        old_board[i + 1][j] +
                        old_board[i + 1][j + 1];

                if (old_board[i][j] == 1) {
                    new_board[i][j] = (num_of_live_neighbors == 2 || num_of_live_neighbors == 3);
                } else {
                    new_board[i][j] = num_of_live_neighbors == 3;
                }
            }
        }
    }
}

