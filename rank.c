#include <stdio.h>
#define noSubjects 5
#define noStudents 5

struct student{
    int roll;
    double marks[subjects] = {0};
    double total;
}students[noStudents];

int getMax(){
    int maxIndex = 0;
    for( i=0; i<noStudents; i++)
        if( student[i].total >= student[maxIndex].total)
            maxIndex = i;

    return maxIndex;
}

int main(){
    float credit[subjects];
}