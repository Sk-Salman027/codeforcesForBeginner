#include <stdio.h>

int main()
{
    int N, hasEven = 0;
    scanf("%d", &N);
    for (int i = 1; i < N + 1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
            hasEven = 1;
        }
    }
    if (!hasEven)
    {
        printf("-1\n");
    }
    return 0;
}