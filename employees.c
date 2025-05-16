#include <stdio.h>
struct Employees{
    char name[20];
    int salary;
};
struct Employees emp;
int main() {
    float total=0,avg;
    for(int i=0;i<3;i++){
        printf("Enter employee1 name:");
        scanf("%s",&emp.name);
        printf("Enter salary:");
        scanf("%d",&emp.salary);
        total+=emp.salary;
    }
    avg=total/3;
    printf("average=%f",avg);
}
   
