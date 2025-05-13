#include <stdio.h>
int main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    if(10<num && num<100){
        printf("the number is between 10 and 100");
    }else{
        printf("the number is not between 10 and 100");
    }
}
