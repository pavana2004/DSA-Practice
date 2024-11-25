#include <bits/stdc++.h>
#include <iostream>
using namespace std;

string commonprefix(vector<string> &arr)
{

    if (arr.empty())
        return "-1";

    sort(arr.begin(), arr.end());

    string first = arr.front();
    string last = arr.back();
    int minl = min(first.size(), last.size());

    int i = 0;

    while (i < minl && first[i] == last[i])
    {
        i++;
    }

    if (i == 0)
        return "-1";

    return first.substr(0, i);
}

int main()
{
    vector<string> arr = {"geeksforgeeks", "geeks",
                          "geek", "geezer"};
    cout << commonprefix(arr) << endl;

    return 0;
}
