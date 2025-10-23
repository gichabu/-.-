/*
Name:Ian kariuki 
Reg:CT100/G/26174/25
Description: Celsius convertion 
*/

//

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    float celsius = (fahrenheit - 32) * 5.0 / 9.0;
    return celsius;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    printf("Temperature in Celsius = %.2f°C\n", convertToCelsius(f));
    return 0;
}