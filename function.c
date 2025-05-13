#include <stdio.h>
int add(int a,int b)
{
int c=a+b;
return c;
}
int main() {
    int result=add(4,6);
    printf("sum=%d",result);
    return 0;
}
   
