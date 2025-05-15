#include<stdio.h>
#include<math.h>
int main(){
int num,result=0,rem,digits=0,original;
printf("Enter a number\n");
scanf("%d",&num);
original=num;
while(num!=0){
    int temp=num;
    num/=10;
    digits++;
}
while(num!=0){
    rem=num%10;
    result=result+pow(rem,digits);
    num/=10;
}
if(original==result){
    printf("the number is armstrong number");
}else{
    printf("the number is not armstrong number");
}
}  
