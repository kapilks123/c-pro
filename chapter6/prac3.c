//cprogram on tem times in it s currnt vlaue write function passs by call by refernce
#include<stdio.h>
void timesten(int *addr );
int main(){
    int i=10;
    printf("the value of a %d\n", i);
    timesten(&i);//call by reference
    printf("the value of a %d\n", i);

    return 0;
}
void timesten(int *addr ){
   *addr= *addr *10 ;
}
