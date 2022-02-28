#include<stdio.h>

int main(){
    int rating;
    printf("the rating between the 1 to 5\n");
    scanf("%d",&rating);
    switch (rating) //number condition want to excute we used switch 
    {
    case 1:
        printf("the rating of the value is 1 \n");
        break;
    case 2:
        printf("the rating of the value is 2 \n");
        break;
    case 3:    
        printf("the rating of the value is 3 \n");
        break;
    case 4:
        printf("the rating of the value is 4 \n");
        
        break;
    case 5:
        printf("the rating of the value is 5\n");
    
    default:
        printf("the value added more than 5 not valid \n");
        break;
    }
    return 0;
}