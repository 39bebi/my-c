#include <stdio.h>
#include<string.h>
int main() {
    char name[20];
    printf("enter your full name\n");
    fgets(name,20,stdin);
    printf("your name is:%s",name);
}
