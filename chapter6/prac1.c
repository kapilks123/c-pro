//print variable address andusin address to get the value of variable

#include<stdio.h>

int main(){
    int a=9;
    int *ptr;
    ptr=&a;

    printf("the value of address a : %u\n", &a);
     printf("the value of integer a : %d\n", *ptr); //*ptr or a both are same
      printf("the value of address a : %u\n", a);

    return 0;
}