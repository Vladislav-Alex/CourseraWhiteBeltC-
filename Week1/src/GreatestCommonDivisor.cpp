#include "GreatestCommonDivisor.h"

void greatestCommonDivisor()
{
    int A, B;
    cin >> A >> B;

    while (A > 0 && B > 0)
    {
        if (A > B)
        {
            A = A % B;
        }
        else
        {
            B = B % A;
        }
    }
    cout << A + B;
}

