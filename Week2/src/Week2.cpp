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

int main() {
//    cout << Factorial(7);
//    cout << IsPalindrome("gentleman");
    vector<string> words = PalindromeFilter({"weew", "code", "X"}, 0);
    for (auto item : words)
    {
        cout << item << " ";
    }
    return 0;
}
