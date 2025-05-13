// Online C compiler to run C program online
#include<stdio.h>
int y,p,r,output;
int main(){
    printf("enter the year\n");
    scanf("%d",&y);
    printf("enter the amount\n");
    scanf("%d",&p);
    printf("enter the realistic\n");
    scanf("%d",&r);
    output=y*p*r/100;
    printf("The simple interest is %d",output);
}
