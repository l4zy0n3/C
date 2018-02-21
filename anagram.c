#include <stdio.h>
#include <string.h>

int is_anagram(char *s1, char *s2){
    int cs1[256] = {0}, cs2[256] = {0}, i, flag = 0;
    if(strlen(s1) == strlen(s2)){
        for(i=0;i<strlen(s1);i++){
            cs1[s1[i]]++;
            cs2[s2[i]]++;
        }
        flag = 1;
        for(i=0;i<256;i++){
            if(cs1[i]!=cs2[i]){ flag = 0; break; }
        }
        /*for(i=0;i<256;i++){
            printf("%d | %d\n", cs1[i], cs2[i]);
        }*/
    }
    return flag;
}

int main(){
    char s1[1000], s2[1000];
    gets(s1);
    gets(s2);
	  printf("%s\n", is_anagram(s1, s2)?"Yes":"No");
    return 0;
}
