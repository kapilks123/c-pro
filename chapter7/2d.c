//two dimentional array
#include<stdio.h>

int main(){
    int n_students =3;
    int n_subject =5;

    int marks[3][5];//two dimension
    for (int i = 0; i <n_students; i++)//row               first outer will run  1 st student then his marks inner loop enter  
    {
        for (int j = 0; j <n_subject; j++)//column   //then inner loop run after first students then go back outer loop
        {
         printf("Enter the marks of students %d in subject %d\n", i+1,j+1);
         scanf("%d",&marks[i][j]);
         
        }
        
    
    }
    for (int i = 0; i <n_students; i++)
    {
        for (int j = 0; j <n_subject; j++)
        {
        printf("Enter the marks of students %d in subject %d is: %d\n", i+1,j+1,marks[i][j]);
         
        }
        
    
    }

    
    return 0;
}