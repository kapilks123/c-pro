//creating table for a 2,7,9
#include<stdio.h>
void printtable(int *arr, int num, int n,int level){
    for(int i=0; i<10;i++){ 
        multable[level][i]=2*(i+1);//why i put zero i get whole row , column 0,10 12345664567910 like
        //like matrix table

    }
    for(int i=0; i<10;i++)
    
    {
        printf("%dX%d =%d\n", i+1 ,multable[level][i]);
    }
}

int main(){
     int multable[3][10];
    
    for(int i=0; i<10;i++){ 
        multable[0][i]=2*(i+1);//why i put zero i get whole row , column 0,10 12345664567910 like
        //like matrix table

    }
    for(int i=0; i<10;i++)
    
    {
        printf("2X%d =%d\n", i+1 ,multable[0][i]);
    }



     for(int i=0; i<10;i++){ 
        multable[0][i]=7*(i+1);//why i put zero i get whole row , column 0,10 12345664567910 like
        //like matrix table

    }
    for(int i=0; i<10;i++)
    
    {
        printf("7X%d =%d\n", i+1 ,multable[0][i]);
    }



    for(int i=0; i<10;i++){ 
        multable[0][i]=9*(i+1);//why i put zero i get whole row , column 0,10 12345664567910 like
        //like matrix table

    }
    for(int i=0; i<10;i++)
    
    {
        printf("9X%d =%d\n", i+1 ,multable[0][i]);
    }


    return 0;
}