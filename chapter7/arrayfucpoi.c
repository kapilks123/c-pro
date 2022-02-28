#include<stdio.h>
void printarray(int *ptr, int n){
    for (int i = 0; i < n; i++)
    {
        printf("the value of elements %d is %d\n",i+1,*(ptr+i));//pintin *using + adding
        //1,2,3,45,56,45,78,12 this address was passes in *ptr+i reference
    }
    
}
int main(){
    int arr[] ={1,2,3,45,56,45,78,12};
    printarray  (arr,8);
    
    return 0;
}