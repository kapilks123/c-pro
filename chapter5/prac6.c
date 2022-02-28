//passing value parameter
#include<stdio.h>
//sum input in function a,b  and return integer output
int sum(int a, int b);  // fuction prototype declaration
int main(){
     int c;
     c = sum(2,15);  //function call  
    printf("the value of c %d \n",c);
    
    
    return 0;
}  // changing result to c same output come    //   name sum is don.t matter becouse both diffrerent area
int sum(int a, int b){
    int c;             // in this sum there can be own declare variable like result
    // they don.t  need interaction between other variable 
    c=a+b;                    //function define here
    return c;
}