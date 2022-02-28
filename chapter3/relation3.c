//if else using relation operatorar
#include<stdio.h>

int main(){
    int age;
    printf("person age qulified for drive now:\n");
    scanf("%d",&age);
    if(age!=18) //   '!=' this sign say not eual to 18
    {
        printf("person is qualified\n");
    }
    else{
        printf("person is not qualified\n");
    }

    return 0;
}