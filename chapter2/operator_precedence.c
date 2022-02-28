#include<stdio.h>

int main(){
    int x=4;
    int y=4,z;;
     z=  3*x -4*y;
     printf("the operator precendence value %d\n",z);  //wrong answer
     printf("the operator precendence value %d\n",3*(x -4*y));    // 3*(x -4*y) prenthesis in operator predecer
    // 3*x -4*y give u wrong answers
    printf("the operator precendence value %d\n",3*x / 4*y);//give u wrong answer

    //explain 
    //3*x -4*y
    //3*4 - 4*4
    //12-16
    //-4 but in calsius is show 32    so always go to left to right associativity
    return 0;
}