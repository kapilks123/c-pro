//hoe to use fgets
#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("ks.txt","r");
    //char c=fgetc(ptr);//character by character used for reading file
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    printf("the value of the my character is %c \n",fgetc(ptr));
    return 0;
}