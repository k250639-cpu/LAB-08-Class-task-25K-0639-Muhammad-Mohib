#include <stdio.h>

int main() {
    int i, j, occupied = 0, empty = 0;
    char seat[5][5];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if ((i + j) % 2 == 0) {
                seat[i][j] = 'X';
                occupied += 1;
            } else {
                seat[i][j] = 'O';
                empty += 1;
            }
        }
    }
    printf("\nThe Seating Arrangement is:\n");
    for (i = 0; i < 5; i++) {
        printf("Row %d: ", i + 1);
        for (j = 0; j < 5; j++) {
            printf("%c  ", seat[i][j]);
        }
        printf("\n");
    }
    printf("\nTotal Occupied Seats: %d\n", occupied);
    printf("Total Empty Seats: %d\n", empty);
    return 0;
}
