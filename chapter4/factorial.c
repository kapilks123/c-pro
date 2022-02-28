//write a program of factorail using the for loop
#include<stdio.h>

int main(){
    int a,b=7,c=1;//factorial is a multiplication of 1 to 7 if want 7  factorial you have to give 
    // c is 1 it can  multiply serval times look the cosde carefully
    for(a=1;a<=b;a++){
    c*=a;
    }
    printf("thevalue of factorial is %d\n",c);

    return 0;
}