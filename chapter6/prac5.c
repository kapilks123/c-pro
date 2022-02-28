#include<stdio.h>

int main(){
    int i=8;
    int *ptr;                     //look notes
    int **ptr_ptr;
    //int ***ptr_ptr;

    ptr=&i;
    ptr_ptr =  &ptr;

    printf("the value of ptr %d\n", **ptr_ptr);
    return 0;
}