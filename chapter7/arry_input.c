#include<stdio.h>

int main(){
    int marks[4];//allocate the space for 4 integers
    printf("Enter the value of the students 1:\n");
    scanf("%d",&marks[0]);//o work has integer
    printf("Enter the value of the students 2:\n");
    scanf("%d",&marks[1]);
    printf("Enter the value of the students 3:\n");
    scanf("%d",&marks[2]);
    printf("Enter the value of the students 4:\n");
    scanf("%d",&marks[3]);
    printf("you enter the value of the students %d %d %d %d",marks[0],marks[1],marks[2],marks[3]);
    
   
    return 0;
}