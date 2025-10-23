/*
Name:Ian kariuki 
Reg:CT100/G/26174/25
Description:electric bills
*/
//

#include <stdio.h>

float calculateElectricBill(int units) {
    float bill = 0.0;

    if (units <= 100) {
        bill = units * 10;
    } else if (units <= 200) {
        bill = (100 * 10) + ((units - 100) * 15);
    } else {
        bill = (100 * 10) + (100 * 15) + ((units - 200) * 20);
    }

    return bill;
}

int main() {
    int units;
    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    float totalBill = calculateElectricBill(units);
    printf("Total electric bill: KSh. %.2f\n", totalBill);

    return 0;
}