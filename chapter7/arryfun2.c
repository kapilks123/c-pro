#include<stdio.h>
void printarray(int ptr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("the value of elements %d is %d\n",i+1,ptr[i]);//pintin *using + adding
        //1,2,3,45,56,45,78,12 this address was passes in *ptr+i reference
    }
    ptr[5]=8751;//he has power of change the actual array or reference given
}
int main(){
    int arr[] ={1,2,3,45,56,45,78,12};
    printarray  (arr,8);//giving 8 or not still showing output
    printf("%d",arr[5]); //lets try to change the value array number 5 just for eg
    return 0;
}