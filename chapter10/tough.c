#include<stdio.h>
int main(){ 
    FILE *ptr;
int num;
int num2;

ptr=fopen("kapil.txt","r");
    fscanf(ptr,"%d",&num);//this will take it from other kapil.txt file and that's why fscanf 
    //take it from me
    fscanf(ptr,"%d",&num2);
    fclose(ptr);
    printf("the valume num is %d\n",num);
    printf("the valume num is %d\n",num2);
return 0;
}
