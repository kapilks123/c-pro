//hint by harry 
//fib(n)=fib(n-1) + fib(n-2)
//fib(1)=0
//fib(2)=1
#include<stdio.h>
int fibonacci(int);

int main(){
    int n, x=0 ,i;
printf("Enter the value of \n");
scanf("%d",&n);
for(i = 1; i <= n; i++)  //they used for lopp for this becouse confition was
{
printf("%d\n", fibonacci(x));
x++;
}
    return 0;
}
int fibonacci(int i){
    
  if(i==0) return 0; 
	else if(i==1) return 1; 
	else return (fibonacci(i-1)+fibonacci(i-2));
}

/*Here first of all we have declared one function named fibonacci which will take integer as a input 
and will return a next integer element.
In the above program I have taken 2 variables n and i of integer type.
Now our main logic will start from a “for loop”.
 This loop will be called n number of times, where n is given as input. 
And each time when loop condition will satisfy the value of i will pass as a parameter to fibonacci()
 method as a input.
In the body of fibonaaci(int i) function we have nested if-else. 
If input is 0 then it will return 0.
It input is 1 then it will return 1.
And if the value is greater then one then calculation will perform 
using fibonacci(i-1) + fibonacci(i-2).*/

