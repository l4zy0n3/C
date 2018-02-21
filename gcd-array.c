#include <stdio.h>
#include <string.h>

int min_array(int *arr, int len){
    int min = 0, i;
    for( i=1; i<len; i++){
        if(arr[min]>arr[i]){ min = i; }
    }
    return arr[min];
}

int gcd(int *arr, int len){
    int p = min_array( arr, len), i;
    while(1){
        int c = 0;
        
        for(i = 0; i<len; i++){
            if(arr[i]%p == 0 && arr[i]!=-1)
                c++;
            else
                continue;
        }
        
        if( c == len)
            return p;
        else
            p--;

    }
    
}

int main(){
    int len, arr[1000] = {-1}, i;
    puts("Enter length :");
    scanf("%d", &len);
    puts("Enter array :");
    for(i=0;i<len;i++){
        scanf("%d", &arr[i]);
    }
    printf("GCD is %d", gcd( arr, len));
    return 0;
}
