#include<stdio.h>
#include<string.h>//strlmn is function from the string 

int main(){
    char *st=  "kapil";
    char st2 [45];
    strcpy(st2,st);//both print in this st value passs or copy st2 and print
    printf("now the st2 is %s",st2);

    return 0;
}//it will nmot include the  null character