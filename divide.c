#include <stdio.h>
int main(){
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%3==0){
        if(n%5==0){
            printf("%d is divide by 3 and 5",n);
        }
    }else{
        printf("%d is not divide by 3 and 5",n);
    }
}
