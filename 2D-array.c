#include <stdio.h>
int i,j;
int a[2][3]={
    {1,3,5},
    {4,5,6}
};
int main(){
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            printf("%d\n",a[i][j]);
        }
    }
    return 0;
}
