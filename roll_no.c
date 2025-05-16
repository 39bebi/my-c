#include<stdio.h>
struct student {
    char name[20];
    int roll_no;
    float mark;
};
    int main(){
    struct student s1;
    printf("Enter your name\n ");
    scanf("%s",&s1.name);
    printf("Enter roll number\n");
    scanf("%d",&s1.roll_no);
    printf("Enter marks out of 100\n");
    scanf("%f",&s1.mark);
    printf("name:%s\nroll_no:%d\nmarks=%f",s1.name,s1.roll_no,s1.mark);
}
