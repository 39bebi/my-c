#include<stdio.h>
int main(){
    struct student {
        char name[20];
        int age;
        float weight;
    };
    struct student s1;
    printf("Enter your name ");
    scanf("%s",s1.name);
    printf("Enter age ");
    scanf("%d",s1.age);
    printf("Enter weight ");
    scanf("%f",s1.weight);
}
