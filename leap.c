#include <stdio.h>

int main() {
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        printf("the year is leap year");
    }else{
        printf("the year is not leap year");
    }
}
