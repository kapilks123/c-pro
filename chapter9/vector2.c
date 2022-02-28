//write a function sum vector which return sum of the two vectores
// passes to it the vector must be two -ddimensional
#include<stdio.h>

struct vector{
    int x;
    int y; 

};
struct vector sumvector(struct vector v1, struct vector v2){
struct vector result;
result.x=v1.x+v2.x;
result.y=v1.y+v2.y;

return result;
    
}


int main(){
    struct vector v1,v2,sum;
    v1.x=34;
    v1.y=54;
    printf("x dim is %d and y dim is %d\n",v1.x,v1.y);
   
    v2.x=540;
    v2.y=750;
    printf("x dim is %d and y dim is %d\n",v2.x,v2.y);

    sum=sumvector(v1,v2);
    printf("x dim of result as %d and y dim is %d \n",sum.x,sum.y);


    return 0;
}//if you used typedef you don't have to writwe every where struct vector you can awrite a vector