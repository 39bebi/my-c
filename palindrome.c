#include<stdio.h>
int main(){
int num,reversed=0,rem,original;
printf("Enter a number\n");
scanf("%d",&num);
original=num;
while(num!=0){
    rem=num%10;
    reversed=reversed*10+rem;
    num/=10;
}
if(original==reversed){
    printf("the number is palindrome");
}else{
    printf("the number is not palindrome");
}
}
