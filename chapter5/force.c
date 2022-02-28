//force calculate
#include<stdio.h>
float force (float mass);
int main(){
    float m;
    printf("Enter the value of mass in kgs\n");
    scanf("%f", &m);
    printf("the value of the force is newton is %.2f\n", force(m));//for function (m)
    //%.2f means  after .  how much decimal value you want
    return 0;
}
float force (float mass){
    float result = mass * 9.8;
    return result;

}