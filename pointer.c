#include<stdio.h>
int main(){
    int x=10;
    int *p=&x;
    *p=*p+10;
    printf("value of x:%d\n",x);
    printf("value of *p:%d",*p);
}
