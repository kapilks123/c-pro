#include<stdio.h>
#include<math.h>
                                                                
int main()
{
    int a = 7 ,b=10 , k=3.0/9;
    float t = 6.7, z;
    z = a + t;  // but you cant do a+b=z in this type arithmatic  illegal
    printf("the value of %d\n",b%-a ); 
    printf("the value of %d\n",-b%-a );
    printf("the value of %d\n",b%-a );  
    printf("the vaue of z %f\n", z);
    printf("the value of %d\n", a ^ b ); //this wrong you cant give a to the power b or 7^10
    
    // ^  = this bit wise operator xor
    printf("the value of 7 to the power %f\n", pow(7, 10) ); //you can not add a or b you add number in that
   // when you are using pow add header file#include/,math.h> this will help u 

    printf("the value of %d\n",6+5);
    printf("the value of %f\n",6+5.6);
    printf("the value of %f\n",11+7836.32);   
    printf("the value of 3.0/9 %f\n",3.0/9); //that's  why we use direct method
     // k =3.0/9 only work like that not int declare k like that
    printf("the value of %d\n",k);

    return 0;
}