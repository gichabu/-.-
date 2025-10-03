/*
𝑵𝒂𝒎𝒆:𝑰𝒂𝒏 Gichabu
𝑹𝒆𝒈:𝑪𝑻100/𝑮/26174/25
𝑫𝒆𝒔𝒄𝒓𝒊𝒑𝒕𝒊𝒐𝒏: 𝒄 𝒄𝒐𝒅𝒊𝒏𝒈 𝒇𝒐𝒓 𝒔𝒊𝒎𝒑𝒍𝒆 interest
*/

//
#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt user for age and income
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%lf", &income);

    // Check qualification criteria
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, you do not qualify for a loan.\n");
    }

    return 0;
}
