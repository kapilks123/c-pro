//make table of 5
#include<stdio.h>

int main(){
    //int mul[11];//take array of 10
    int n,d,a,o;
     printf("Enter first number from where you want to start multiplication : \n");
    scanf("%d",&n);
     printf("Enter Last number from where you want to end multiplication : \n");
    scanf("%d",&d);
    for(int i=n; i<d;i++){
        o=0; //tart from 0 that is why
        for(int a=1; a<11;a++){
        o+=n;//=o+n
    printf("%dx%d =%d\n", i,a,o);
//another loop  print f  like 5x1 to 5x10
    }
    printf("multiplicatiob done %d\n", i);
//another loop  print f  like 5x1
    }
    return 0;
}