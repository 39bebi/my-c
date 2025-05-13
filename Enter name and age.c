#include <stdio.h>

int main() {
    char name[10];
    int age;
    printf("Enter a name\n");
    scanf("%s",&name);
    printf("Enter a age\n");
    scanf("%d",&age);
        printf("Hello %s,you are %d years old\n",name,age);
}
