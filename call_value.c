#include<stdio.h>
int main(){
    int a=10,b=20;
    printf("before swap a=%d,b=%d\n",a,b);
    int temp=b;
    b=a;
    a=temp;
    printf("After swap a=%d,b=%d\n",a,b);
}
    
