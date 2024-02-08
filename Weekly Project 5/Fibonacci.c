#include <stdio.h>

void fibonacci(int n) {
    int first = 0, second = 1, next, i;

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
}

int main() {
    int num_terms;

    printf("Enter Any Number : ");
    scanf("%d", &num_terms);

    if (num_terms <= 0) {
        printf("Error: Number of terms should be a positive integer.\n");
    } else {
        fibonacci(num_terms);
    }

    return 0;
}
