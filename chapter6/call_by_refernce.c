#include<stdio.h>
void wrong_swap(int a, int b);
void swap(int *a, int *b);
int main(){
    int x=3,y=4;
     printf("the value of x and y is %d and %d\n", x,y);
     //wrong_swap(x,y);//using swapping variable still not gone work in call by value
     swap(&x,&y); //it will work becouse in function defination *a ,*b is there
     //it will accept becouse storing address now and call by refernce method
     printf("the value of x and y is %d and %d\n", x,y);
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;


}
void swap(int *a, int *b){ //here this swap will call by up main function for memory
//allocation , and fuction is swap function is called by main function
 int temp;
    temp=*a;
    *a=*b;
    *b=temp;


}