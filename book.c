#include<stdio.h>
struct book {
    char name[20];
    char writer_name[40];
    int price;
};
struct book b;
int main(){
    printf("Enter book name\n");
    scanf("%s",&b.name);
    printf("Enter a writer's name\n");
    scanf("%s",&b.writer_name);
    printf("Enter a price\n");
    scanf("%d",&b.price);
    printf("Name:%s\nWriter's name:%s\nPrice:%d",b.name,b.writer_name,b.price);
    
}
