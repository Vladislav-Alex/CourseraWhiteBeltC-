#include "PalindromeFilter.h"
#include "Palindrome.h"

vector<string> PalindromeFilter(vector<string> words, int minLength)
{
    vector<string> temp;
    for (auto item : words)
    {
        if (item.size() >= minLength && IsPalindrome(item))
        {
            temp.push_back(item);
        }
    }
    return temp;
}

