#include <stdio.h>
int main() {
    int i,num,isprime=1;
    printf("Enter a number is starting from positive 2\n");
    scanf("%d",&num);
    for(i=2;i<=num/2;i++){
        if(num%2==0){
            isprime=0;
        }
    }
    if(isprime){
        printf("the number is a prime\n");
    }else{
        printf("the number is not prime\n");
    }
}
      
