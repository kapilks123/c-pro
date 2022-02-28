#include<stdio.h>
void printadd(int a){  //direct defination
printf("the  address  of a variable a : %u\n", &a); //it will show memory allocation

}
int main(){
    int i=5; //inter value stay here
    printf("the value of address a : %d\n", i);
    printadd(i); //it will pass the copy of interger to the function defination
    printf("the value of address a : %u\n", &i); //&a means used %u

    return 0;
}