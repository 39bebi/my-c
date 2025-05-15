#include<stdio.h>
#include<string.h>
int n,i;
int pass(char arr[n]){
    for(i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}
int main(){
    char arr[]={"Tumkur"};
    n=strlen(arr);
    int result=pass(arr);
}
