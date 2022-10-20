#include <iostream>
#include <set>

using namespace std;

int main()
{
   int N;
   cin >> N;
   set<string> uniqueRows;
   for (int i = 0; i < N; ++i)
   {
       string str;
       cin >> str;

       uniqueRows.insert(str);
   }
   cout << uniqueRows.size();
   return 0;
}
