#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool areAnagrams(string &s1, string &s2)
{
    if (s1.size() != s2.size())
        return false;
    string a = s1, b = s2;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}
int main()
{
    string s1 = "geeks";
    string s2 = "skgee";
    cout << areAnagrams(s1, s2) << endl;
}