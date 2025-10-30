/*
Name:Ian kariuki 
Reg:CT100/G/26174/25
Description:hotel chain
*/
#include <stdio.h>


int main() {
    int chain[3][5][10]; 
    int totalOccupied = 0;



    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2; 
                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    //
    printf("Total number of occupied rooms across all branches: %d\n", totalOccupied);

    return 0;
}