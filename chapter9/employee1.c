#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;    //first make structuree format
    char name[10];
};
int main(){
    struct employee e1,e2,e3;     //assign as whole staff as multiple people with e1 his all details
    e1.code=100;  //member opearator type e1.code
    e1.salary=34.456;
    //e1.name="kapil";   won't work

    strcpy(e1.name,"kapil");//char[10] declare alredy name not more than 10
    printf("%d\n",e1.code);
    printf("%f\n",e1.salary);    //print the value
    printf("%s\n",e1.name);
return 0;
}