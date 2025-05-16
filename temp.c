#include <stdio.h>
int main() {
    int n,arr[n],*start,*end,temp;
    printf("Enter the number of elments in array ");
    scanf("%d",&n);
    printf("Enter the ements ");
    scanf("%d",&arr);
    start=arr;
    end=arr+(n-1);
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
       printf("%d",arr[i]);
    }
 
}
   
      
