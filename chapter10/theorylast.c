//hoe to use fgets
#include<stdio.h>

int main(){
    FILE *ptr;
    char C ;

    ptr=fopen("ks3.txt","r");
   //fgetc is used taking value from other file and fputc putiing on other file
   C=fgetc(ptr);//getting one character first

   while(C!=EOF){ //for end ing the character it will come out
       printf("%c",C);
       C=fgetc(ptr);//next character
   }
    return 0;
}
