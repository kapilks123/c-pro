#include<stdio.h>

int main(){
    char s[34];
     printf("Enter the your name: ");
     scanf("%s",s);//&remove becouse it show the adress  's' is already have capability
     printf("your name is %s\n",s);
    return 0;
}