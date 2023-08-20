#include <stdio.h>

// Recursive approach
int recursiveF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    return recursiveF(n - 3) + recursiveF(n - 2);
}

// Iterative approach
int iterativeF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    int prev3 = 0, prev2 = 1, prev1 = 2, current = 0;
    for (int i = 3; i <= n; i++) {
        current = prev3 + prev2;
        prev3 = prev2;
        prev2 = prev1;
        prev1 = current;
    }
    
    return current;
}

// Dynamic programming with memoization
int memoF(int n, int *memo) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = memoF(n - 3, memo) + memoF(n - 2, memo);
    return memo[n];
}

int main() {
    int n = 14;
    
    printf("Recursive F(%d) = %d\n", n, recursiveF(n));
    
    printf("Iterative F(%d) = %d\n", n, iterativeF(n));
    
    int memo[100]; // Assuming a maximum value for n
    for (int i = 0; i < 100; i++) memo[i] = -1;
    printf("Memoization F(%d) = %d\n", n, memoF(n, memo));
    
    return 0;
}
