/*
Name:Ian kariuki 
Reg:CT100/G/26174/25
Description: Room occupancy
*/

#include <stdio.h>

int main() {
    int array[5][10];

   
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            array[i][j] = i * 10 + j;  
        }
    }
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}