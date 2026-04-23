#include <stdio.h>
#include <math.h>

int main() {
    int num, choice, i, isPrime, temp;
    long long factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\n--- MENU ---\n");
    printf("1. Square Root\n");
    printf("2. Square\n");
    printf("3. Cube\n");
    printf("4. Check Prime\n");
    printf("5. Factorial\n");
    printf("6. Prime Factors\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Square root = %.2f\n", sqrt(num));
            break;

        case 2:
            printf("Square = %d\n", num * num);
            break;

        case 3:
            printf("Cube = %d\n", num * num * num);
            break;

        case 4:
            isPrime = 1;
            if (num <= 1)
                isPrime = 0;
            else {
                for (i = 2; i <= num / 2; i++) {
                    if (num % i == 0) {
                        isPrime = 0;
                        break;
                    }
                }
            }

            if (isPrime)
                printf("%d is a Prime Number\n", num);
            else
                printf("%d is not a Prime Number\n", num);
            break;

        case 5:
            factorial = 1;
            for (i = 1; i <= num; i++)
                factorial *= i;

            printf("Factorial = %lld\n", factorial);
            break;

        case 6:
            printf("Prime factors = ");
            temp = num;
            for (i = 2; i <= temp; i++) {
                while (temp % i == 0) {
                    printf("%d ", i);
                    temp /= i;
                }
            }
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}