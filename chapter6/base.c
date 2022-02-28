//address value show your location , basic program
#include<stdio.h>

int main(){
    int i =34; //* is value od adddress operator
    int *j=&i; //j will store the address of i
    printf("the value of  i is %d\n ",i);
    printf("the value of  i is %d\n ",*j);    //both print value of i
    
    printf("the value of  i is %u\n ",&i);
    printf("the value of  i is %u\n ",j);//this two tell us about memory allocated or
    // location
    printf("the value of  j is %u\n ",&j);//j who put other variable address it have also 
    //address
    printf("the value of  j is %u\n ", *(&j)); //find out j value it value of i will shpw
    return 0;
}