//function in structure
#include<stdio.h>
#include<string.h>
struct employee{

int code;
float salary;
char name[10];
};
void show(struct employee emp){
    printf("the code is employee is %d\n",emp.code);
    printf("the salary is employee is %f\n",emp.salary);
    printf("the name is employee is %s\n",emp.name);
}
int main(){
    struct employee e1;
    struct employee *ptr;
    ptr=&e1;
    ptr->code=785;
    ptr->salary=456985;
    strcpy(ptr->name,"kapil");

    show(e1);
    return 0;
}


