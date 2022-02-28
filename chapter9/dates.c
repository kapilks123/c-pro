#include<stdio.h>
typedef struct date {
    int date;
    int month;
    int year;

}date;
void display(date d){
    printf("the date is : %d/%d/%d\n", d.date , d.month, d.year);
}





int dataCmp(date d1 ,date d2){
    //make decision of the basic of year comparison
    if (d1.year > d2.year){
        return 1;

    }
    if (d1.year<d2.year){
        return -1;
    }
    if (d1.month >d2.month){
        return 1;

    }
    if(d1.month > d2.month){
        return -1;
    }
        //make decision or gthe of date comparision
    if(d1.date > d2.date){
        return 1;
    }

    if(d1.date < d2.date){
        return -1;
    }
    return 0;
    }
    

int main(){
date d1={2,11,31};   ///greater than lower - in this system then we get 1 lesss to more it will -1

date d2={2,11,22};
display(d1);
display(d2);
int a = dataCmp(d1,d2);
printf("date a comparison function returns: %d", a);
return 0;
}
