//wap to implement a recursive descent parser for a given grammar
// S -> E
// E ->  E op E | i | (E)
// op -> + | *

#include<stdio.h>
char inp[10];
int currPos, countOp = 0, countId = 0;

int op(){
	printf("%c", inp[currPos]);
	if( inp[currPos] == '*'){
		currPos += 1;
		return 1;
	}
	if( inp[currPos] == '+'){
		currPos += 1;
		return 1;
	}
	return 0;
}

int E(){
	printf("%c", inp[currPos]);
	if( inp[currPos] == 'i'){
		currPos += 1;
		return op()?E():1;
	}
	return 0;
}

int S(){
	int status;
	status =  E();
	return status;
}

void main(){
	scanf("%s",&inp);
	currPos = 0;
	int status = S();
	if( status == 1) printf("Parsed");
	else printf("Error");
}
