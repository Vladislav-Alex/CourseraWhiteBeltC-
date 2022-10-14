#include "BinaryNumbers.h"

void binaryNumbers()
{
    int N;
    cin >> N;
    vector<int> num;

    while (N != 1)
    {
        num.push_back(N % 2);
        N /= 2;
    }
    num.push_back(N);

    for (int i = num.size() - 1; i >= 0; --i)
    {
        cout << num[i];
    }
}

