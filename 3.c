// Largest prime factor
#include <stdio.h>
#include <math.h>

#define N 600851475143


int main(int argc, char *argv[]) {

    long long n = N;

    while (n % 2 == 0) {
        n = n/2;
    }

    // n must be odd at this point. So we can skip
    // one element (Note: i += 2)
    for (long long i = 3; i <= (long long)sqrt(n); i += 2) {

        // While i divides n, print i and divide n
        while (n % i == 0) {
            printf("%llu\n", i);
            n = n/i;
        }
    }

    // This condition is to handle the case
    // when n is a prime number greater than 2
    if (n > 2) {
        printf("%llu\n", n);
    }

    return 0;
}