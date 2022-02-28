#include<stdio.h>

int main(){
    int year;
    printf("the enter a year :\n");
    scanf("%d",&year);
    if(year % 400 ==0)   //i put 400 first becouse some case it divisiable 400, or 100 0r 4 
    //1900 not divisiable by 100or 400 pecial case
    {
        printf("it %d will be leap year\n",year);
    }
    else if(year % 100 ==0)
    {
       printf("it %d will not be leap year\n",year); 
    }
    else if (year % 4 ==0)
    {
      printf("it %d will be leap year:\n",year);
    }
    else{
        printf("the year %d will not be leap year:\n",year);
    }
    return 0;
}