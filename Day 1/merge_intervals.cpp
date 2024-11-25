
#include <iostream>
#include <vector>
#include <climits>
#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> mergeOverlap(vector<vector<int>> &arr)
{

    sort(arr.begin(), arr.end());

    vector<vector<int>> res;
    res.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++)
    {
        vector<int> &last = res.back();
        vector<int> &curr = arr[i];

        if (curr[0] <= last[1])
            last[1] = max(last[1], curr[1]);
        else
            res.push_back(curr);
    }

    return res;
}

int main()
{
    vector<vector<int>> arr = {{7, 8}, {1, 5}, {2, 4}, {4, 6}};
    vector<vector<int>> res = mergeOverlap(arr);

    for (vector<int> &interval : res)
        cout << '[' << interval[0] << ',' << interval[1] << ']';
    cout << "" << endl;
    vector<vector<int>> arr2 = {{1, 3}, {2, 4}, {6, 8}, {9, 10}};
    vector<vector<int>> res2 = mergeOverlap(arr2);

    for (vector<int> &interval : res2)
        cout << '[' << interval[0] << ',' << interval[1] << ']';
    cout << "" << endl;
    return 0;
}
