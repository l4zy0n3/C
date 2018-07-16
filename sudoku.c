#include <stdio.h>
#define N 4

// print a matrix
void printMatix( int puzzle[N][N]){
    int i = 0, j;
    for( ; i < N; i++){
        for( j = 0; j < N; j++)
            printf("%d ", puzzle[i][j]);
        printf("\n");
    }
}

// if safe to move
int nextX( int puzzle[N][N]){
    if( x>=0 && y>=0 && x < N && y < N && puzzle[x][y] == 1)   return 1;
    return 0;
}

int solveSudoku( int puzzle[N][N]){
    if( nextX() == -1 && nextY() == -1 ){
        printMatrix( puzzle);
        return 1;
    }

    if( !noConflicts() ){
        if( solveSudoku( puzzle, nextX( x), nextY( y) ) )  return 1;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int Sudoku[N][N] = {
                { 1, 1, 1, 0},
                { 0, 1, 1, 0},
                { 1, 1, 0, 0},
                { 1, 1, 1, 1}
                };

    solveSudoku( Sudoku, 0, 0);
    return 0;
}
// TODO sudoku using backtracking
