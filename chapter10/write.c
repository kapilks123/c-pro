//writing to the file
#include<stdio.h>

int main(){
    FILE *fptr;
    int number=45;
    fptr=fopen ("generated.txt","w");
    fprintf(fptr,"the number is %d ",number);
    fprintf(fptr,"thank for using fprintf",number);
    fclose(fptr);

    return 0;
}