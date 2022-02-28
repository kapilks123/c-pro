//2d with function
#include<stdio.h>
void printarray(int n_students, int n_subject)

 {
      int marks[n_students][n_subject];
       
    
    for (int i = 0; i <n_students; i++)
    {
        for (int j = 0; j <n_subject; j++)
        {
        printf("Enter the marks of students %d in subject %d is: %d\n", i+1,j+1,marks[i][j]);
    
        }
    }
    

}
int main(){
    int arr;
    printf("Enter the of students \n");
     scanf("%d",&arr);
     int  b;
     printf("Enter the subject \n");
     scanf("%d",&b);
     int i;
     int j;
     int marks[i][j];
    
     for (i = 0; i < arr; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("Enter The marks of student %d in subject %d  : %d\n", i + 1, j + 1,marks[i][j]);

            scanf("%d", &marks[i][j]);
            
        }
    }
       printarray(arr,b);
    
    
    return 0;
}