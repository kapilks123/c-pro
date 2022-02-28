// change function code
#include<stdio.h>
void change (int a);

int main(){
    int b =344;
    printf("the value of b before %d\n",b);     //both taken same variable but main vairabke wil display 
    change(b);                                        //nothing gone change any
    printf("the value of b after %d\n",b);

    
    return 0;
}
void change (int b){
      b =714;                         //this will remain same only main function will be display
}