//multiplication table
#include<stdio.h>

int main(){
    int num;
    FILE *ptr;
    printf("enter the integer if you need table \n");
    scanf("%d",&num);

    ptr=fopen("lol.txt","w");
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d x %d=%d\n",num ,i+1,num*(i+1));
    }
    fclose(ptr);
    printf("successful completed table %d , table.txt\n",num);
     

    return 0;
}