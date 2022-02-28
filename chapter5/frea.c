// C Program to Convert Celsius to Fahrenheit using Functions
#include <stdio.h>

// This function will convert celsius to fahrenheit
float ToFahrenheit(float c) {
    return (c * 9 / 5) + 32;
}

// It's the driver function
int main() {
    float c;  // To store the celsius
    int i = 1;

    printf("Enter the temperature in Celsius::\n");
    scanf("%f", &c);

    // Final Output
    printf("\n%f Celsius = %f Fahrenheit\n", c, ToFahrenheit(c));
    return 0;
}


