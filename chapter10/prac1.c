//three intergr read
#include<stdio.h>

int main(){
    int a,b,c;
    FILE *ptr;
    ptr=fopen("kapilks.txt","r");
    
     fscanf(ptr,"%d%d%d",&a,&b,&c);//reaf\d from that another file
     printf("the value of interger is a,b,c %d %d %d\n",a,b,c);

    return 0;
}