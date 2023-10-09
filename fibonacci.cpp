#include "fibonacci.h"

void fibonacci(int nacciRray[], int size) {
    // Check for the base case (first two elements)
    if (size >= 1) {
        nacciRray[0] = 0;
    }
    if (size >= 2) {
        nacciRray[1] = 1;
    }

    // Generate the Fibonacci sequence
    for (int i = 2; i < size; i++) {
        nacciRray[i] = nacciRray[i - 1] + nacciRray[i - 2];
    }
}
