//this camaprision of two pointer
#include<stdio.h>

int main(){
    float a =4,b=5;
    int *p1,*p2;
    p1=&a;
    p2=&b;
   if(p1 > p2) {
      printf("P1 is greater than p2");
   } else {
      printf("P2 is greater than p1");
   }
   return(0);
}
