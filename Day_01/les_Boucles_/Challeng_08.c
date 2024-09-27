#include <stdio.h>

int main() {
    int i, n, F1 = 0, F2 = 1, F;
    
    printf("ennter a number (n ∈ N): ");
    scanf("%d", &n);
    
    for(i = 2; i <= n; i++) {
        F = F1 + F2;
        F1 = F2;
        F2 = F;
        
        printf("Result is: %d\n", F);
    }

    return 0;
}