#include <stdio.h>

 
int zakaria(int n) {

    if (n == 0) {

        return 0;   

    } else if (n == 1) {

        return 1;  

    } else {
        
        int F1 = 0, F2 = 1, F;

        for (int i = 2; i <= n; i++) {

            F = F1 + F2;
            F1 = F2;
            F2 = F;
        }
        
        return F; 
    }
}

int main() {
    int n;

     
    printf("Gib's mir eiene nummer bittr (n ∈ N): ");
    scanf("%d", &n);

     
    printf(" nachdem istt %d\n", zakaria(n));

    return 0;
}
