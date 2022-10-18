#include "Reverse.h"

void Reverse(vector<int>& vec)
{
    vector<int> temp = vec;
    for (int i = 0; i < vec.size(); ++i)
    {
        vec[i] = temp[temp.size() - 1 - i];
    }
}
