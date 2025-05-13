#include <stdio.h>

int main() {
   int age;
   printf("Enter a age\n");
   scanf("%d",&age);
   if(age>18){
       if(age<30){
           printf("you are a young adult\n");
       }
   }else{
       printf("you are not a young adult");
   }
}
