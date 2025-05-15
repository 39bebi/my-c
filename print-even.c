#include<stdio.h>
int arr[8]={26,90,87,65,45,22,31,56};
void even()
{
    printf("All the even number:\n");
    for(int i=0;i<8;i++){
        if(arr[i]%2==0){
            printf("%d\n",arr[i]);
        }
    }
}
int main(){
    even();
} 
