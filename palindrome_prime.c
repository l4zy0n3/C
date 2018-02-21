#include<stdio.h>
#include <math.h>

int is_prime(int num){
    int i = num - 1, flag = 1;
	while(i>sqrt(num)){
	    if( num%i == 0){ flag = 0; break; }
	    i-=1;
	}
	return flag;
}

int is_palindrome(int num){
    int r, s=0, orig = num;
    while(num!=0){
        r = num%10;
        num /= 10;
        s = s*10 + r;
    }
    //printf("%d %d %d %d",orig,num,s,r);
    if(orig == s) return 1;
    else return 0;
}

int main(){
    int i;
    //printf("%d %d", is_prime(151), is_palindrome(151));
	for(i=10;i<=1000;i++){
		if(is_prime(i) && is_palindrome(i))	printf("%d\n", i);
	}
    return 0;
}

