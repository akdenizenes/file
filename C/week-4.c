#include <stdio.h>

// Function declaration
int multiply(int x, int y);

int main() {
    int result = multiply(5, 3);
    printf("Result: %d\n", result);
    return 0;
}

// Function definition
int multiply(int x, int y) {
    return x * y;
}