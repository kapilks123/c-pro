//20 people value array in 
#include<stdio.h>  
#include <string.h>    
struct employee{    
int id;    
char name[10];    
};    
int main(){    
int i;    
struct employee st[20];    
printf("Enter Records of 20 emoployee");    
for(i=0;i<20;i++){    
printf("\nEnter id:");    
scanf("%d",&st[i].id);    
printf("\nEnter Name:");    
scanf("%s",&st[i].name);    
}    
printf("\nemployee Information List:");    
for(i=0;i<20;i++){    
printf("employee id :%d, \n Name:%s",st[i].id,st[i].name);    
}    
   return 0;    
}    