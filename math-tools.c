#include <stdio.h>
#include <stdbool.h>

int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}

int main() {
    printf("Factorial of 5: %d\n", factorial(5));
    printf("Is 7 prime? %s\n", is_prime(7) ? "Yes" : "No");
    return 0;
}
