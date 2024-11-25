#include <iostream>
#include <string>
using namespace std;
string longestPalindrome(const string &s)
{
    if (s.empty())
        return "";
    int start = 0, maxLength = 1;
    for (int i = 0; i < s.length(); i++)
    {
        int low = i - 1;
        int high = i + 1;
        while (high < s.length() && s[high] == s[i])
            high++;
        while (low >= 0 && s[low] == s[i])
            low--;
        while (low >= 0 && high < s.length() && s[low] == s[high])
        {
            low--;
            high++;
        }
        int length = high - low - 1;
        if (length > maxLength)
        {
            maxLength = length;
            start = low + 1;
        }
    }
    return s.substr(start, maxLength);
}
int main()
{
    string str = "forgeeksskeegfor";
    cout << "Longest Palindromic Substring: " << longestPalindrome(str) << endl;