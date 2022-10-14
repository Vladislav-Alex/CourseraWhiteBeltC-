#include "SecondOccurrence.h"

void secondOccurrence()
{
    string str;
    cin >> str;

    int i = 0;
    int fEntering = 0;
    for (auto item : str)
    {
        if (item == 'f')
        {
            ++fEntering;
            if(fEntering == 2)
            {
                break;
            }
        }
        ++i;
    }
    if (fEntering == 2)
        cout << i << endl;
    else if (fEntering == 1)
        cout << "-1" << endl;
    else
        cout << "-2" << endl;
}


