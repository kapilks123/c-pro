#include<stdio.h>//for printf come from  this header file
#include<stdlib.h>//generate for random number
#include<time.h>//header file for time

int main(){
    int number , guass, nguess;
    srand(time(0)); //see the time in second return it
    number= rand()%100 + 1;//generate a random number in 1 to 100
    //  printf("the number is %d\n", number);
    //keeping running the loop util the guesses
    do
    {
     printf("guess the number between 1 to 100 \n");
     scanf("%d",&guass);
    if(guass>number){
    printf("lower number please \n");
    } 
    else if(guass < number)
    {
        printf("higher the number please \n");
    }
    else{
        printf("you gurssed it %d \n", nguess);
    }nguess++;
    }while (guass!=number);
    
    return 0;
}