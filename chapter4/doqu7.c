//using do while it will be natural number sum
#include<stdio.h>

int main() {

  int i=1, s = 0;
  
  do{
      s=s+i;
       i++;
    }
  
  while(i<=10);
  printf("Sum is :%d\n", s);
  return 0;
}

