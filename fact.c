#include<stdio.h>
int i;
int my_fact(int n,int fact) {
if(n==0){
    printf("1");
}
else if(n<0){
    printf("Enter positive number");
}
else{
    for(i=0;i<=n;i++){
        fact*=i;
    }
}
return 0;
}
int main(){
    int c;
    c=my_fact(4,5);
    printf("%d",c);
}
