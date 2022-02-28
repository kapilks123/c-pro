#include<stdio.h>
//sum input in function a,b  and return integer output
int sum(int a, int b);  // fuction prototype declaration
int main(){
     int c;
     c = sum(2,15);  //function call  
    printf("the value of c %d \n",c);
    
    
    return 0;
}
int sum(int a, int b){
    int result;             // in this sum there can be own declare variable like result
    // they don.t  need interaction between other variable 
    result=a+b;                    //function define here
    return result;
}