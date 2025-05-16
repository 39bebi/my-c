#include <stdio.h>
int main() {
    int arr[10]={1,2,3,4,5},n=5,*start,*end,temp;
    start=arr;
    end=arr+n-1;
    while(start<end){
        temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
 
}
   
