#include<stdio.h>
int main(){
FILE *ptr;
int num;
int num2;

ptr=fopen("kapil1.txt","r");
if(ptr==NULL){
printf("this file does not exit \n");
}
else{    //if exit it will do this thing 
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num2);
    fclose(ptr);//close the read or write later file will close thats why fclose used
    printf("the valume num is %d\n",num);
    printf("the valume num is %d\n",num2);
}
return 0;
}
