//factorial using recursion  itself call it
#include<stdio.h>
int factorial(int x);

int main(){
    int a=5;
    printf("the value of factorial %d is %d ", a, factorial(a));  // first a print then factorial a
    
    //first main function start excuting and stop  then got ot next section again excuting and 
    //sometime came to main again start excuting
    return 0;
}
int factorial(int x){
    int f;
    printf("calling factorial (%d)\n",x); // it show evry factiorial step
    if(x==1 || x==0){                                                        
        return 1; //becouse 0 factorial also 1 and 1 facorail also 1
    }
    else{
        
        f= x * factorial(x-1);
         return f;
    }
    }
