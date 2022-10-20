#include <iostream>
#include <vector>

using namespace std;

//int main()
//{
//    int Q;
//    cin >> Q;
//    vector<bool> vec;
//    string oper;
//    int numberOfPerson = 0;
//    for (int i = 0; i < Q; ++i)
//    {
//        cin >> oper;
//        if (oper == "WORRY")
//        {
//            cin >> numberOfPerson;
//            vec[numberOfPerson] = true;
//        }
//        else if (oper == "QUIET")
//        {
//            cin >> numberOfPerson;
//            vec[numberOfPerson] = false;
//        }
//        else if (oper == "WORRY_COUNT")
//        {
//            int countOfWorriesPeople = 0;
//            for (const auto& item : vec)
//            {
//                if (item)
//                    ++countOfWorriesPeople;
//            }
//            cout << countOfWorriesPeople << endl;
//        }
//        else if (oper == "COME")
//        {
//            int k;
//            cin >> k;
//            if (k <= 0)
//            {
//                for (; k < 0; ++k)
//                {
//                    vec.erase(vec.end() - 1);
//                }
//            }
//            else
//            {
//                for (; k > 0; --k)
//                {
//                    vec.push_back(false);
//                }
//            }
//        }
//        cout << "Vector size: " << vec.size() << endl;
//    }
//    return 0;
//}
