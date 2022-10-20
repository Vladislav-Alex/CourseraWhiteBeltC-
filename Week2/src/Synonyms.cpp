#include <iostream>
#include <map>
#include <set>

using namespace std;

int main()
{
   int Q;
   cin >> Q;
   map<string, set<string>> synonyms;

   for(int i = 0; i < Q; ++i)
   {
       string str;
       cin >> str;

       if (str == "ADD")
       {
           string word1, word2;
           cin >> word1 >> word2;

           synonyms[word1].insert(word2);
           synonyms[word2].insert(word1);
       }
       else if (str == "COUNT")
       {
           string word;
           cin >> word;

           cout << synonyms[word].size() << endl;
       }
       else if (str == "CHECK")
       {
           string word1, word2;
           cin >> word1 >> word2;

           if (synonyms[word1].count(word2) || synonyms[word2].count(word1))
           {
               cout << "YES" << endl;
           }
           else
           {
               cout << "NO" << endl;
           }
       }
   }
   return 0;
}
