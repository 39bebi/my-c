#include<stdio.h>
int main(){
int num,result=0,rem,original;
printf("Enter a number\n");
scanf("%d",&num);
original=num;
while(num!=0){
    rem=num%10;
    result+=rem*rem*rem;
    num/=10;
}
if(original==result){
    printf("the number is armstrong number");
}else{
    printf("the number is not armstrong number");
}
}  
