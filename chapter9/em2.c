//write a program to store the details of a employ from user
// defined data user the structure decleared above
#include<stdio.h>
#include<string.h>
struct employee{
int code;
float salary;
char name[10];//size name not more than 10 br careful here
};
int main(){
    struct employee e1, e2, e3;
    printf("Enter value of e1.code : ");
    scanf("%d",&e1.code);
    printf("Enter the value of e1.salary: ");
    scanf("%f",&e1.salary);
    printf("Enter the value of e1.name: ");
    scanf("%s",e1.name);

    printf("Enter value of e2.code : ");
    scanf("%d",&e2.code);
    printf("Enter the value of e2.salary: ");
    scanf("%f",&e2.salary);
    printf("Enter the value of e2.name: ");
    scanf("%s",e2.name);

    printf("Enter value of e3.code : ");
    scanf("%d",&e3.code);
    printf("Enter the value of e3.salary: ");
    scanf("%f",&e3.salary);
    printf("Enter the value of e3.name: ");
    scanf("%s",e3.name);

    printf("%d and %f and %s\n, %d and%f and %s\n ,%d and %f and %s \n",e1.code,e1.salary,e1.name,e2.code,e2.salary,e2.name,e3.code,e3.salary,e3.name);
    return 0;
    
}