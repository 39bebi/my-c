#include <stdio.h>
int main() {
    int i,num,isprime=1;
    printf("Enter a number is starting from positive 2\n");
    scanf("%d",&num);
    int limit=(int) num/2;
    for(i=2;i<=limit;i++){
        if(num%2==0){
            isprime=0;
            break;
        }
    }
    if(isprime){
        printf("the number is a prime\n");
    }else{
        printf("the number is not prime\n");
    }
} 
