#include<stdio.h>
int main( int argc, char *argv[]){
	int i, isPalindrome;
	printf("Is it a palindrome ?\n++++++++++++++++++++++\n\n");
	for(i=1;i<argc;i++){
		char *leftside=argv[i], *rightside=argv[i]-1;
		printf("%s\n",leftside);
		isPalindrome=1;
		while(*(rightside+1)) rightside++;
		while ((leftside < rightside) && isPalindrome){
			if (*leftside != *rightside)	isPalindrome=0;
			leftside++;
			--rightside;
		}
		printf("%s",isPalindrome?"YES, IT IS!\n\n":"NOPE, IT AIN'T!\n\n");
	}	
	return 0;
}
