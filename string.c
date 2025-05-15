#include<stdio.h>
#include<string.h>
int main(){
    char name[20];
    printf("Enter the name:");
    scanf("%s",&name);
    printf("%s\n",name);
    int length=strlen(name);
    printf("%d\n",length);
    strcpy(name,"lavanya");
    printf("%s\n",name);
    int compare=strcmp("baby","lavanya");
    printf("%d",compare);
    return 0;
}
