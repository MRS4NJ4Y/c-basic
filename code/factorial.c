#include <stdio.h>

int main() {
    int n;
    unsigned long long factorial = 1; // Factorial can be a large number, hence unsigned long long

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Ensure the number is non-negative
    if (n < 0) {
        printf("Factorial of a negative number doesn't exist.\n");
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i; // factorial = factorial * i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}