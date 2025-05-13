#include <stdio.h>
int main(){
    int marks;
    printf("Enter a student's marks\n");
    scanf("%d",&marks);
    if(marks>=40){
        printf("student passed\n");
    }else{
        printf("failed\n");
    }
}
    
