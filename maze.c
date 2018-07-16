#include <stdio.h>
#define N 4

// print a matrix
void printMatrix( int mat[N][N]){
    int i = 0, j;
    for( ; i < N; i++){
        for( j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

// if safe to move
int canMove( int mat[N][N], int x, int y){
    if( x>=0 && y>=0 && x < N && y < N && mat[x][y] == 1)   return 1;
    return 0;
}

int solveMaze( int mat[N][N], int x, int y, int sol[N][N]){
    if( x == N-1 && y == N-1){
        sol[x][y] = 1;
        printMatrix( sol);
        return 1;
    }

    if( canMove( mat, x, y) ){
        sol[x][y] = 1;
        if( solveMaze( mat, x+1, y, sol) )  return 1;
        if( solveMaze( mat, x, y+1, sol) )  return 1;
        sol[x][y] = 0;
    }
    return 0;
}

int main(int argc, char const *argv[])
{
    int maze[N][N] = {
                { 1, 1, 1, 0},
                { 0, 1, 1, 0},
                { 1, 1, 0, 0},
                { 1, 1, 1, 1}
                };

    int sol[N][N] = {
                { 0, 0, 0, 0},
                { 0, 0, 0, 0},
                { 0, 0, 0, 0},
                { 0, 0, 0, 0}
                };
    solveMaze( maze, 0, 0, sol);
    return 0;
}
