#include<stdio.h>
int main(){
   int x=10;
   int *ptr=&x;
   printf("value of x:%d\n",x);
   printf("value of pointer:%d\n",*ptr);
   *ptr=30;
   printf("value of x:%d",x);
}
