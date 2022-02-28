#include<stdio.h>// making program on array of five students marks display on screenm

int main(){
    int marks[5];
    for(int i=0;i<5;++i){
    printf("Enter the value of the students %d:\n",i);
    scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)//if you put for loop here it will display upper case lower 
    //if don't use it will diplay one for upper and one for down print on display
    {   
        printf(" the value of the marks for  students %d is: %d\n",i+1,marks[i]);
    }
    
    return 0;
}