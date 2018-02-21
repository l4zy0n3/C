#include<stdio.h>
#include <math.h>

int is_prime(int num){
    int i = num - 1, flag = 1;
    if( num == 1) return 0;
	while(i>=sqrt(num)){
	    if( num%i == 0 ){ flag = 0; break; }
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
    if(orig == s) return 1;
    else return 0;
}

int main(){
    int i;
   	for(i=1;i<=1000;i++){
//change accordingly
		if(is_prime(i) && is_palindrome(i))	printf("%d\n", i);
	}
    return 0;
}

