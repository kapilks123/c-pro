//if else using relation operatorar
#include<stdio.h>

int main(){
    int age;
    printf("person age qulified for drive now:\n");
    scanf("%d",&age);
    if(age>=18) //   '>=' greater than 18 or equal  qulified lower than not applicable
    {
        printf("person is qualified\n");

    }
    else{
        printf("person is not qualified\n");
    }

    return 0;
}