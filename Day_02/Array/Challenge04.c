#include <stdio.h>
#include <math.h>

int main()
{

    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int T[n];
    for (int i = 0; i < n; i++)
    {

        printf("T[%d] = ", i + 1);
        scanf("%d", &T[i]);
    }

    int max;
    max = T[0];

    for (int i = 0; i < n; i++)
    {
        if (T[i] > max)
        {
            max = T[i];
        }
    }

    printf("le  max esst : %d", max);
    return 0;
}