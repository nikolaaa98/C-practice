#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    // Check for factors up to the square root of the number
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return false; // Not a prime number
        }
    }

    return true; // It's a prime number
}

// Function to check the Goldbach hypothesis for a given even number n
void checkGoldbachHypothesis(int n) {
    if (n <= 2 || n % 2 != 0) {
        printf("Invalid input. Please enter an even natural number greater than 2.\n");
        return;
    }

    printf("Goldbach hypothesis for %d:\n", n);

    // Check for pairs of prime numbers that sum up to n
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
        }
    }
}

int main() {
    int n;

    // Input an even natural number greater than 2
    do {
        printf("Enter an even natural number greater than 2: ");
        scanf("%d", &n);

        if (n <= 2 || n % 2 != 0) {
            printf("Invalid input. Please try again.\n");
        }
    } while (n <= 2 || n % 2 != 0);

    // Check the Goldbach hypothesis for the given number
    checkGoldbachHypothesis(n);

    return 0;
}

