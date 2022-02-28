//hoe to use fgets
#include<stdio.h>

int main(){
    FILE *ptr;
    char C ;

    ptr=fopen("ks3.txt","r");
   //fgetc is used taking value from other file and fputc putiing on other file
   C=fgetc(ptr);//getting one character first

   while(1){ //for end ing the character it will come 
       C=fgetc(ptr);//next character
       if(C==EOF){
           break;
       }
        printf("%c",C);
   }
    return 0;
}
