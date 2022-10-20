#include <iostream>
#include <set>
#include <map>

using namespace std;

int main()
{
   map<set<string>, int> busStops;
   int Q;
   cin >> Q;
   for(int i = 0; i < Q; ++i)
   {
       int countOfStops;
       cin >> countOfStops;
       set<string> stops;
       for (int j = 0; j < countOfStops; ++j)
       {
           string stop;
           cin >> stop;
           stops.insert(stop);
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
