#include "Equation.h"

void equation()
{
    int A, B, C;
    cin >> A >> B >> C;

    if (A != 0)
    {
        int D = pow(B, 2) - 4 * A * C;
        if (D > 0)
        {
            cout << ((-1.0) * B + sqrt(D)) / (2 * A) << " " << ((-1) * B - sqrt(D)) / (2 * A) << endl;
        }
        else if (D == 0)
        {
            cout << ((-1.0) * B) / (2 * A) << endl;
        }
    }
    else
    {
        if (B != 0)
        {
            cout << (-1.0) * C / B << endl;
        }
    }
}
