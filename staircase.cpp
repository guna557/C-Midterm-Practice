#include <stdio.h>

void staircase(int n) {
    for (int i = 1; i <= n; i++) {
        // Print spaces: (n - i) times
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Print hashes: i times
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        // Move to the next row
        printf("\n");
    }
}

int main() {
    int n = 6;
    staircase(n);
    return 0;
}


