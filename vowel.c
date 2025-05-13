#include <stdio.h>
int main(){
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        printf("the given character is vowel");
    }else{
        printf("the given character is not vowel");
    }
}
