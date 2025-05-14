#include<stdio.h>
int sum=0;
int avg(int n)
{
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int avg=sum/n;
    return avg;
}
int main(){
    printf("Enter n elements to array\n");
    int result=avg(5);
    printf("Average is:%d",result);
}
