#include<stdio.h>
int largest(int a,int b,int c)
{
    if(a>b&&a>c){
        printf("a is largest");
    }else if(b>a&&b>c){
        printf("b is largest");
    }else{
        printf("c is largest");
    }
}
int main(){
    int result=largest(3,4,2);
}
