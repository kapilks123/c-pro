//function basic
#include<stdio.h>
void display(); //function prototype   void means return nothing
int main(){
    int a;
    printf("initializing display function\n");
    display();//function call
    printf("display the function finishing his work\n");

    return 0;
}
void display(){
printf("this is display value \n"); //function defination
}