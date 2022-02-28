/*in logical operator u can satisfied multiple operation  but relation one 
at time using both u can do multiple condition*/    
// && logical use || operation in this 
#include<stdio.h>

int main(){
    int age;
    int vippass=0; // or is condition you can retired in any age 1,17
      vippass=1;
    printf("the work age started\n");
    scanf("%d",&age);
    if( age >= 18 && age<=60 ||  vippass==1 )//age 18 equal or more than allowed >= ,,,,,<= more 60 retired allowed
    {
        printf("the age 18 above you can work\n");
    }
    else{
        printf("the age below 18 not eligiabble or 60 retired now\n");
    }
    return 0;
}
//look the notes