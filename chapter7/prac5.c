//reverse the number 
#include<stdio.h>
void reverse(int *arr , int n){ //taking his address
int temp;
for (int  i = 0; i < (n/2); i++) // n/2

{
    temp =arr[i];
    arr[i]=arr[n-i-1]; //using this condition swapping is done
    arr[n-i-1] = temp;
}

}
int main(){   // array giving to the 7  number is given
    int arr[]={1,2,3,4,5,6,7};
    reverse(arr,7);
    for (int  i = 0; i < 7; i++)
    {
        printf("gthe value of %d  elements is : %d\n",i,arr[i]);
    }
    

    return 0;
}