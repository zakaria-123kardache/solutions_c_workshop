#include <stdio.h>

int main()
{

    int n, fact, nmbr;

    printf("gibt's mir einen nummer bitter ! ");
    scanf(" %d", &n);

    int T[n];
    for (int i = 0; i <= n; i++)
    {

        printf(" T[%d]", i + 1);
        scanf(" %d", &T[i]);
    }
    printf("Gibt's einen fact bitten !  ! ");
    scanf(" %d", &fact);

    for (int i = 0; i <= n; i++)
    {

        T[i] += fact;
    }

    printf(" le resultant esst ,: \n ");

    for (int i = 0; i <= n; i++)
    {

        printf("  %d ", T[i]);
    }

    return 0;
}