//100 people data
#include<stdio.h>
#include<string.h>
struct employee{

int code;
float salary;
char name[10];
};
int main(){
    struct employee facebook[100];
    facebook[0].code=100;
    facebook[0].salary=10000;
 strcpy(facebook[0].name,"kapil");

 
    facebook[1].code=1001;
    facebook[1].salary=10;
 strcpy(facebook[1].name,"kapl");


    facebook[2].code=1002;
    facebook[2].salary=102010;
 strcpy(facebook[2].name,"kail");
 printf("done");
 
    
    return 0;
}