#include<stdio.h>

int main(){
    int num;
    printf("the value of num\n");
    scanf("%d",&num);
    if(num==1)
    {
    printf("the value will 1 equal\n"); //this contidition is true it will goto return 0
                                        //the condition is not true it will print eslse condoition
    }
    else if(num==2)
    { 
        printf("the vlue of 2 equal\n");
    }
    else if(num==3)
    {
        printf("the value of 3 equal\n");

    }
    else{
        printf("the value of 1,2,3 are not equal\n");
    }
    return 0;
}