#include<stdio.h>

int main(){
    int physics, math, chemistry;
    float total;
    printf("the physics marks:\n");
    scanf("%d",&physics);

    printf("the math marks:\n");
    scanf("%d",&math);

    printf("the chemistry marks:\n");
    scanf("%d",&chemistry);
    total= (physics+math+chemistry) / 3; //look care fully

    if(total<40 || chemistry<33 || math<33 || chemistry<33)
    {
        printf("the total percentage %f your fail\n",total);
    }
    else 
    {
        printf("the person total percentage is %f your pass\n",total);
    
    
    }
    return 0;
}//if else if need condition to express for each or it for multiple condition to express