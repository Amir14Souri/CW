#include <stdio.h>

long long int factoriel(int n);

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d! = %lld", num, factoriel(num));
    printf("%d! = %lld", 2 * num, factoriel(num));

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
