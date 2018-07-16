#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/* A Simple program to simulate Snakes & Ladders
*
*/

int randRange( int lower, int upper){
	srand ( time(NULL) );
	return (rand()%(upper-lower))+1;
}
int main( int argc, char *argv[]){
	int board[100]={0}, scount, lcount, start, end, i = 0;
	scanf("%d %d", &scount, &lcount);
	while( i < scount+lcount){
		scanf("%d %d", &start, &end);
		board[start] = end;
		i++;
	}
	int p1, p2;
	int p1pos = 0, p2pos = 0;
	while( p1pos < 100 && p2pos < 100 ){
		p1pos += randRange( 1, 6);
		p2pos += randRange( 1, 6);
		if( board[p1pos]!=0 )
			p1pos = board[p1pos];
		if( board[p2pos]!=0 )
			p2pos = board[p2pos];
	}
	printf( "%s", ((p1pos >= 100)?"Player 1 Wins!":"Player 2 Wins!"));
	return 0;
}
