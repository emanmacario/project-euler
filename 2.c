// Even Fibonacci numbers
#include <stdio.h>

// Fibonacci number upper limit (inclusive)
#define MAX 4000000


int main(int argc, char *argv[]) {

    int sum = 0, x = 1, y = 2, z;

    sum += y;

    while ((z = x + y) <= MAX) {

        if (z % 2 == 0) {
            sum += z;
        }
        x = y;
        y = z;
    }

    printf("Sum: %6d\n", sum);

    return 0;
}