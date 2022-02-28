//write  a program  check wheather a number divisiable by 97 or not
#include<stdio.h>

int main(){
    int num,c;
    printf("the value of number\n");
    scanf("%d",&num);
    c=num%97;
    printf("divisibility by : %d\n",c);  //if return 0 so its divisiable in ouput

    return 0;
}