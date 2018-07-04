// Multiples of 3 and 5
#include <stdio.h>

#define UPPER_THRESH 1000
#define F1 3
#define F2 5

int main(int argc, char *argv[]) {

    int sum = 0;
    for (int n = 0; n < UPPER_THRESH; n++) {
        if (!(n % F1) || !(n % F2)) {
            sum += n;
        }
    }

    printf("Sum: %3d\n", sum);

    return 0;
}