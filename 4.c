// Largest palindrome product
#include <stdio.h>
#include <string.h>
#include <assert.h>

#define UPPER 999
#define LOWER 100
#define SIZE 10


int is_palindrome(char *n) {
    assert(n);

    for (int i = 0; i < strlen(n); i++) {
        if (n[i] != n[strlen(n)-1-i]) {
            return 0;
        }
    }
    return 1;
}

void max_palindrome_prod() {

    char product_str[SIZE];

    int max = 0;
    for (int i = UPPER; i >= LOWER; i--) {

        for (int j = i; j >= LOWER; j--) {

            int product = i*j;
            memset(product_str, '\0', SIZE);
            sprintf(product_str, "%d", product);

            if (product > max && is_palindrome(product_str)) {
                max = product;
            }
        }
    }
    printf("Max palindrome product: %6d\n", max);
}


int main(int argc, char *argv[]) {

    max_palindrome_prod();

    return 0;
}