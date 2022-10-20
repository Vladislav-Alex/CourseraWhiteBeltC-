//============================================================================
// Name        : Week2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "Factorial.h"
#include "Palindrome.h"
#include "PalindromeFilter.h"
#include "MoveStrings.h"
#include "Reverse.h"

void PrintVector(const vector<string>& vec)
{
    for (auto item : vec)
    {
        cout << item << " ";
    }
    cout << endl;
}

void PrintVector(const vector<int>& vec)
{
    for (auto item : vec)
    {
        cout << item << " ";
    }
    cout << endl;
}

//int main() {
////    cout << Factorial(7);
////    cout << IsPalindrome("gentleman");
//    vector<string> words = PalindromeFilter({"weew", "code", "X"}, 0);
////    for (auto item : words)
////    {
////        cout << item << " ";
////    }
//
//    //Part2
////    vector<string> source = {"a", "b", "c"};
////    vector<string> destination = {"z"};
////    MoveStrings(source, destination);
////    PrintVector(destination);
////    PrintVector(source);
//
//    vector<int> numbers = {1, 5, 3, 4, 2};
//    Reverse(numbers);
//    PrintVector(numbers);
//    return 0;
//}
