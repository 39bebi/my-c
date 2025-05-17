
#include <stdio.h>
char name[3][10];
int arr[3][3],marks;
void mark(){
    for(int i=0;i<3;i++){
        printf("Enter student %d name\n",i+1);
        scanf("%s",&name[i]);
        printf("Enter 3 subject marks\n");
        for(int j=0;j<3;j++){
         printf("suject%d:",j+1);
         scanf("%d",&arr[i][j]);
        }
    }
}
int main() {
    mark();
    printf("\nstudents details\n");
    for(int i=0;i<3;i++){
        printf("Name:%s\n",name[i]);
        printf("marks:");
        for(int j=0;j<3;j++){
        printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}
    
    
