#include<stdio.h>
typedef struct datetime {
    int date;
    int month;
    int year;
    int hour;
    int sec;


}datetime;
void display(datetime d,datetime t){
    printf("the date time is  : %d/%d/%d/%d/%d\n", d.date , d.month, d.year, d.hour, d.sec);
}
 
int dataCmp(datetime d1 ,datetime d2 ,datetime d3 ,datetime d4){
    //make decision of the basic of year comparison
    if (d1.year > d2.year){
        return 1;

    }
    if (d1.year<d2.year){
        return -1;
    }
    if (d1.month >d2.month){
        return 1;//make decision or gthe of date comparision

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
      //mAKE DEcision of the hour comparison
     if(d3.hour < d4.hour){
        return 1;
    }
     
      if(d3.hour < d4.hour){
        return -1;
    }
     //make decision of the sec comparsec
     if(d3.sec < d4.sec){
        return 1;
    }
     
      if(d3.sec < d4.sec){
        return -1;
    }
    return 0;
    }
    

int main(){
datetime d1={2,11,31,12,56};   ///greater than lower - in this system then we get 1 lesss to more it will -1

datetime d2={2,11,2,10,44};
display(d1);
display(d2);

int a = dataCmp(d1,d2);
printf("date a comparison function returns: %d", a);
return 0;
}
