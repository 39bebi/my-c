#include <stdio.h>
int main() {
int arr[10]={1,2,3,4,5,2,6,7,8,9};
int i,sum=0;
for(i=0;i<10;i++)
{
    sum+=arr[i];
}
printf("%d",sum);
}
    
