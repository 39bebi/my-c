#include<stdio.h>
int main(){
    int arr[]={10,28,36};
    int *ptr= arr;
    printf("%d\n",*ptr);
    *ptr++;
    printf("%d\n",*ptr);
    *ptr++;
    printf("%d",*ptr);
}
