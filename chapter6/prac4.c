//average using ipointer
#include<stdio.h>
int calculated(int a,int b ,int*sum, float *avg){
    *sum = a + b;
    *avg= (float)(*sum/2);


}
  
int main(){

    int i=7, j=6,sum;
    float avg;
    calculated(i,j,&sum,&avg);
    printf("the value of sum is %d \n",sum );
    printf("the value of sum is %f \n",avg);
    

    return 0;
}