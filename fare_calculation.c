/*
Name:Ian kariuki 
Reg:CT100/G/26174/25/*
 Description:Fare Calculation 
*/
 
 //
 
#include <stdio.h>

float calculate fare(float distance) {
    float fare = distance * 50;
    return fare;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total fare = KSh. %.2f\n", calculateFare(distance));
    return 0;
}