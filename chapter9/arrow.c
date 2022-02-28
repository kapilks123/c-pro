//write a program illustrate of arrow operate
//function in structure
#include<stdio.h>
#include<string.h>
struct employee{

int code;
float salary;
char name[10];
};

int main(){
    struct employee emp;
    struct employee *ptr;
    ptr=&emp;
    ptr->code=785;
    ptr->salary=456985;
    strcpy(ptr->name,"kapil");

    printf("the code is employee is %d\n",emp.code);
    printf("the salary is employee is %f\n",emp.salary);
    printf("the name is employee is %s\n",emp.name);

    
    return 0;
}


