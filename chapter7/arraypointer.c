#include<stdio.h>

int main(){
    int marks[8];//make array with 8 number capacity
    int *ptr;//make one integer pointer
    ptr= &marks[0];//0 why arry start with 0,1,2,3
    ptr=marks; //both are same with 0 without this[0]
    for (int i = 0; i < 8; i++)
    {
        printf("Enter the value of marks for students %d: \n", i+1);
        scanf("%d",ptr);//if youn put &ptr memory address show thats why
        ptr++; //this ptr++ taking address one by one another number address taking
    }
    for (int i = 0; i < 8; i++)
    {
        printf("the value of makes for student %d is %d \n",i+1,marks[i]);
    }
    
    
    return 0;
}