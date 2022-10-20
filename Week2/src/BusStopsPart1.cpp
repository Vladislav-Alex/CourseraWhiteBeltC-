#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map<string, vector<string>> busStops;
    vector<string> busNumbers;
    int Q;
    cin >> Q;

    for (int i = 0; i < Q; ++i)
    {
        string oper;
        cin >> oper;

        if (oper == "NEW_BUS")
        {
            string busNumber;
            int stop_count;
            cin >> busNumber >> stop_count;
            busNumbers.push_back(busNumber);
            vector<string> busStopsVector(stop_count);
            for (auto& item : busStopsVector)
            {
                cin >> item;
            }
            busStops[busNumber] = busStopsVector;
        }
        else if (oper == "BUSES_FOR_STOP")
        {
            string stop;
            cin >> stop;
            vector<string> temp;
            for (const auto& item : busNumbers)
            {
                for (const auto& existingStop : busStops[item])
                {
                    if (stop == existingStop)
                    {
                        temp.push_back(item);
                    }
                }
            }
            if (temp.size())
            {
                for (const auto& item : temp)
                {
                    cout << item << " ";
                }
            }
            else
            {
                cout << "No stop";
            }
            cout << endl;
        }
        else if (oper == "STOPS_FOR_BUS")
        {
            string bus;
            cin >> bus;

            if (!busStops.count(bus))
            {
                cout << "No bus" << endl;
                continue;
            }

            vector<string> temp;
            for (const auto& stop : busStops[bus])
            {
                temp.clear();
                cout << "Stop " << stop << ": ";
                for (const auto& busStopsElem : busStops)
                {
                    if (bus == busStopsElem.first)
                        continue;

                    for (const auto& item : busStopsElem.second)
                    {
                        if (stop == item)
                            temp.push_back(busStopsElem.first);
                    }
                }
                if (temp.size())
                {
                    for (const auto& item : temp)
                    {
                        cout << item << " ";
                    }
                }
                else
                {
                    cout << "no interchange";
                }
                cout << endl;
            }
        }
        else if (oper == "ALL_BUSES")
        {
            if (busStops.size() == 0)
            {
                cout << "No buses" << endl;
            }
            else
            {
                for (const auto& busMap : busStops)
                {
                    cout << "Bus " << busMap.first << ": ";
                    for (const auto& stop : busMap.second)
                    {
                        cout << stop << " ";
                    }
                    cout << endl;
                }
            }
        }
    }
    return 0;
}
