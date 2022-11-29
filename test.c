#include <stdio.h>

long long int factoriel(int n);

int main()
{
    int num;
    scanf("%d", &num);
    printf("%lld", factoriel(num));

    return 0;
}

long long int factoriel(int n)
{
    int result = 1;
    for (int i = 2; i <= n; i++)
    {
        result *= i;
    }
    return result;
}