#include<stdio.h>

int main(){
    int principal=200 , rate=10 , year=2;//your taking money from someone200 rate of give money 10 for year 2
    int SimpleInterest;// formula=pir/100

    SimpleInterest= (principal * rate * year)/100;
    printf("calculate rate of iterest %d", SimpleInterest);
    return 0;
}