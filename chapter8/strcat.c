#include<stdio.h>
#include<string.h>//strcat is function from the string 

int main(){
    char st1[45]=  "kapil";
    char *st2 ="fuck";
    strcat(st1,st2);//take a value from  st1 put in st2 thats it  //don;t inter chANGE st1 and st2
    printf("now the st2 is %s",st1);//if put st2 it will print only fuck if print 
    //st2 it will print kapil fuck

    return 0;
}//it will nmot include the  null character