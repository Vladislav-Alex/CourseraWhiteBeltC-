#include "MinSring.h"

void minString()
{
    string word1, word2, word3;
    cin >> word1 >> word2 >> word3;

    if (word1 < word2)
    {
        if (word1 < word3)
        {
            cout << word1 << endl;
        }
        else
        {
            cout << word3 << endl;
        }
    }
    else
    {
        if (word2 < word3)
        {
            cout << word2 << endl;
        }
        else
        {
            cout << word3 << endl;
        }
    }
}
