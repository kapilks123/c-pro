#include<stdio.h>

int main(){
    int arr[2][3][4]; 
    for (int i = 0; i < 2; i++){
        for (int  j = 0; j < 3; j++)
        {
            for (int k = 0; i < 4; k++)
            {
            printf("the address of arr[%d][%d][%d] is%u\n",i,j,k,&arr[i][j][k]); //rr[i][j][k] address will print ijk loop variable
            }
            
        }
        
    }

    
    return 0;
}