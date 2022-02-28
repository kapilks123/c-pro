//cprogram on tem times in it s currnt vlaue write function passs by call by refernce
#include<stdio.h>
int timesten(int addr );
int main(){
    int addr=58;
    printf("the value of a %d\n", addr);

    printf("the value of a %d\n", timesten(addr));

    return 0;
}
int timesten(int addr ){
   addr= addr *10 ;
}
