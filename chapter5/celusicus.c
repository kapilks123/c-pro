#include<stdio.h> //formula for celsius temperature to farenheit (0°C × 9/5) + 32 = 32°F
float fahrenheit(float Celsius);

int main(){
    float Celsius;
    printf("Enter the value of \n");
    scanf("%f",&Celsius);
    printf("\n%f Celsius = %f Fahrenheit\n",Celsius,fahrenheit(Celsius)); //look closely when goving value
    //fahrenheit has value inside its celsius put also print f then it will print
    return 0;
}
float fahrenheit(float Celsius)
{
     int a;
     a=( Celsius * 9 / 5) + 32;
    return a;
}
