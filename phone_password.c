/*
Name:Ian Gichabu 
Reg:CT100/G/26174/25
Date:8-10_25
Description:passsword
*/
#include <stdio.h>

int main() {
    int password;

    do {
        printf("Enter your password: ");
        scanf("%d", &password);

        if (password != 1234) {
            printf("Incorrect password. Try again.\n");
        }
    } while (password != 1234);

    printf("Access granted!\n");

    return 0;
}