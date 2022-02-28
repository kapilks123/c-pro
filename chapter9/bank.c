#include<stdio.h>  
#include <string.h>    
struct bankemployee{    
int id;  
float salary;  
char name[10];    
};    
int main(){    
int i;    
struct bankemployee st[20];    
printf("Enter Records of 20 emoployee");    
for(i=0;i<20;i++){    
printf("\nEnter id:");    
scanf("%d",&st[i].id);   
printf("\nEnter salary:");    
scanf("%f",&st[i].salary);  
printf("\nEnter Name:");    
scanf("%s",&st[i].name);    
}    
printf("\nemployee Information List:");    
for(i=0;i<20;i++){    
printf("employee id :%d, \n  salary %f \n:  Name:%s \n",st[i].id,st[i].salary,st[i].name);    
}    
   return 0;    
}    