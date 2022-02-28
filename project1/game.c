//game extra format syntax and new concept for you
#include<stdio.h>//for printf come from  this header file
#include<stdlib.h>//generate for random number
#include<time.h>//header file for time

int main(){
    int number , guass, nguess;
    srand(time(0)); //see the time in second return it
    number= rand()%100 + 1;//generate a random number in 1 to 100
    //  printf("the number is %d\n", number);
    //keeping running the loop util the guesses
    return 0;
}