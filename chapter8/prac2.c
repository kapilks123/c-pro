//write a program of own version of strln function from <string.h>
#include<stdio.h>
#include<string.h>
int strlen(char *st){
    char *ptr =st;//ptr will change the value of string like this 
    int len=0;
    while(*ptr !='\0'){//then ptr will find '\0'
        len++;///same for len update the value
        ptr++;//update the value of the variable you not updateit will remain the same 
    }
    return len;
}
int main(){
    char st[]="kapil";//array without lengtrh and string make by me  st will go to the strlen
    int l= strlen(st);//we have to make st equal, to the ptr upper function
    printf("lenght of this string is %d\n",l);
    return 0;
}
//explain= len++ ,ptr++, it will point to the next character again and again in string 
//length string add or checked
//after a find the valuue of ptr='\0' then come out of loop
//we get character and his length from l
//then code is running