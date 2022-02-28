#include<stdio.h>

int main(){
    int a;
    printf("the value of age : \n");
    scanf("%d",&a);
    if(a>18){
        printf("the person eligiable for voting:%d\n",a);
    }
    else{
        printf("the person is not eligiable for voting:%d\n",a);
    }

    return 0;
}