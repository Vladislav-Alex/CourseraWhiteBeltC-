#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<vector<string>, int> busStops;
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; ++i)
    {
        int countOfStops;
        cin >> countOfStops;
        vector<string> stops(countOfStops);
        for (auto& item : stops)
        {
            cin >> item;
        }
        if (!busStops.count(stops))
        {
            int new_value = busStops.size() + 1;
            busStops[stops] = new_value;
            cout << "New bus " << new_value;
        }
        else
        {
            cout << "Already exists for " << busStops[stops];
        }
        cout << endl;
    }
    return 0;
}
