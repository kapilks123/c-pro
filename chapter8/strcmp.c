#include<stdio.h>
#include<string.h>//strcat is function from the string 

int main(){
    char st1[45]=  "kapil";
    char *st2 ="harami";  //it will show from ascii value subtacting bigger ascii to lower ascii
    int val=strcmp(st1,st2);//they will lower to bigger ascii value
    
    printf("now the val is %d",val);

    return 0;
}