//typedef code 
#include<stdio.h>
#include<string.h>
typedef struct employee{

int code;
float salary;
char name[20];
}emp;//it make the data type of a write like that this

void show(struct employee emp){//emp for a typedef for custom data type  to make for using
 printf("the code is employee is %d\n",emp.code);
    printf("the salary is employee is %f\n",emp.salary);
    printf("the name is employee is %s\n",emp.name);
    emp.code =34;
}
int main(){
      emp e1; //declare e1
         emp *ptr;//ptr pointing to e1
    //typedef end is here

    
    //set a members value for e1
    ptr = &e1;
    ptr->code=785;
    ptr->salary=456985;
    strcpy(ptr->name,"kapil");

    show(e1);
    return 0;
}

