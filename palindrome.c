#include<stdio.h>
int main( int argc, char *argv[]){
	char str[20], *leftside=str, *rightside=str-1;
	printf("Is it a Palindrome ?\n");
	scanf("%[^\n]s",str);
	int isPalindrome=1;
	while(*(rightside+1)) rightside++;
	while ((leftside < rightside) && isPalindrome){
		if (*leftside != *rightside)	isPalindrome=0;
		leftside++;
		--rightside;
	}
	printf("%s",isPalindrome?"YES, IT IS!":"NOPE, IT AIN'T!");
	return 0;
}
