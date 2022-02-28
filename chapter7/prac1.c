#include<stdio.h>

int main(){
    int arr[10];
    ///int *ptr =&arr[0];
     int *ptr =arr;
     ptr = ptr+2;//pointing to the arr 2  and  pointing arr2 address store in ptr
     if(ptr==&arr[2]){//address of third elements
         printf("these point to be same address \n");
     }else{
         printf("these point not  to be same address \n");
     }
    return 0;
}