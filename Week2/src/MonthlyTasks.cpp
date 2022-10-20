//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    vector<int> days_in_month = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    int month_number = 0;
//    int Q;
//    cin >> Q;
//    string oper;
//    vector<vector<string>> tasksForMonth(days_in_month[month_number]);
//    for (int i = 0; i < Q; ++i)
//    {
//        cin >> oper;
//        if (oper == "ADD")
//        {
//            int i;
//            string task;
//            cin >> i;
//            cin >> task;
//            tasksForMonth[i - 1].push_back(task);
//        }
//        else if (oper == "DUMP")
//        {
//            int i;
//            cin >> i;
//            for (const auto& item : tasksForMonth[i - 1])
//            {
//                cout << item << " ";
//            }
//            cout << endl;
//        }
//        else if (oper == "NEXT")
//        {
//            int prevMonthNum = month_number;
//            ++month_number;
//            if (month_number == 12)
//                month_number = 0;
//
//            if (days_in_month[prevMonthNum] > days_in_month[month_number])
//            {
//                vector<vector<string>> temp = tasksForMonth;
//                tasksForMonth.resize(days_in_month[month_number]);
//                for(int i = days_in_month[month_number] - 1; i < days_in_month[prevMonthNum]; ++i)
//                {
//                    for (const auto& item : temp[i])
//                    {
//                        tasksForMonth[days_in_month[month_number] - 1].push_back(item);
//                    }
//                }
//            }
//            else
//            {
//                tasksForMonth.resize(days_in_month[month_number]);
//            }
//        }
//    }
//    return 0;
//}
