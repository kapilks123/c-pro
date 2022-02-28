//hoe to use fgets
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("ks2.txt","w");
    //char c=fgetc(ptr);//character by character used for reading file
    putc('k',ptr);//for multiple character write
    putc('p',ptr);
    putc(' ',ptr);
    putc('k',ptr);
    putc('a',ptr);
    putc('m',ptr);
    putc('k',ptr);
    fclose(ptr);
    return 0;
}