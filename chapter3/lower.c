//ascii value of a to z lower case
#include<stdio.h>

int main(){
    char ch;
    printf("enter a value : \n");
    scanf("%c",& ch);

    if (ch >= 97 && ch <= 122)
    {
    printf("the value will be lower case\n");
    }
    else {
        printf("the value be not a lowercase\n");
    }
    return 0;
}