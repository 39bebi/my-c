#include<stdio.h>
struct student {
    char name[20];
    int marks;
};
int main(){
    struct student s1[3];
    float total=0,avg;
    for(int i=0;i<3;i++){
        printf("enter student1 name:");
        scanf("%s",&s1[i].name);
        printf("enter marks:");
        scanf("%d",&s1[i].marks);
        total+=s1[i].marks;
    }
    avg=total/3;
    printf("average is:%.2f",avg);
}
