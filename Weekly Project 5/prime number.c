#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1)
        return false; // 0 and 1 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return false; // If num is divisible by any number in this range, it's not prime
    }

    return true; // If no divisors found, num is prime
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Error: Input should be a positive integer.\n");
    } else {
        if (isPrime(num)) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}

