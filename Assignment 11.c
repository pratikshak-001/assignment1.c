#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    // Square root
    printf("\nSquare root = %.2f", sqrt(n));

    // Square
    printf("\nSquare = %d", n * n);

    // Cube
    printf("\nCube = %d", n * n * n);

    // Check for prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        for (i = 2; i <= n / 2; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("\nThe number is Prime");
    else
        printf("\nThe number is Not Prime");

    // Factorial
    if (n < 0) {
        printf("\nFactorial not possible for negative numbers");
    } else {
        for (i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("\nFactorial = %lld", factorial);
    }

    // Prime factors
    printf("\nPrime factors = ");
    int temp = n;

    for (i = 2; i <= temp; i++) {
        while (temp % i == 0) {
            printf("%d ", i);
            temp /= i;
        }
    }

    return 0;
}