// for loop using natural number
#include<stdio.h>

int main(){
    int a , sum=0;
   for(a=1;a<=10;a++)
   {
       sum=sum+a;
   
        printf("the number of sum 1 to 10 :%d\n",sum );// "{}" this column outside you print 
        //it will print 1 time but inside it will
        //10 times.
   }
    return 0;
}