//if else using relation operatorar
#include<stdio.h>

int main(){
    int age;
    printf("person age qulified for drive now:\n");
    scanf("%d",&age);
    if(age>18) //   '>' greater than 18
    {
        printf("person is qualified");
    }
    else{
        printf("person is not qualified");
    }

    return 0;
}