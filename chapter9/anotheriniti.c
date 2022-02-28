//other method for initialize
#include<stdio.h>
#include<string.h>
struct employee{

int code;
float salary;
char name[10];
};
int main(){
    struct employee kapil ={100,523645,"kapil"};
    printf("code is %d: \n",kapil.code);
    printf("code is %f: \n",kapil.salary);
    printf("code is %s: \n",kapil.name);
    return 0;

}