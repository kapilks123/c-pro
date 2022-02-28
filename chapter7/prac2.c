#include<stdio.h>

int main(){
    int mul[10];//take array of 10
    for(int i=0; i<10;i++){ //for loop using 10   1 to 10
        mul[i]=5*(i+1);//put a mul is i =5 X (i+1)   this for  5x 1,23,456,

    }
    for(int i=0; i<10;i++)//another loop  print f  like 5x1 to 5x10
    
    {
        printf("5x%d =%d\n", i+1 ,mul[i]);
    }
    return 0;
}