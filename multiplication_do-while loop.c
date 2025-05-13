#include <stdio.h>

int main() {
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    int i=1;
    do{
        printf("%dx%d=%d\n",n,i,n*i);
        i++;
    }while(i<=10);
}
