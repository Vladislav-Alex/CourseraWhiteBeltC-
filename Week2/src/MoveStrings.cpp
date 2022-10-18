#include "MoveStrings.h"

void MoveStrings(vector<string>& source, vector<string>& destination)
{
    for (const auto& item : source)
    {
        destination.push_back(item);
    }
    source.clear();
}
