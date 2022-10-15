#include "Factorial.h"

int Factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    else
    {
        int factorial = 1;
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i;
        }
        return factorial;
    }
}

