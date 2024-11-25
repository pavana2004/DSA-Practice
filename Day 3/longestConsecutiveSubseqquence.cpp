#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestConsecutiveSubsequence(vector<int> &arr)
{
    if (arr.empty())
        return 0;
    sort(arr.begin(), arr.end());
    int maxi = 1, c = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
            continue;
        if (arr[i] == arr[i - 1] + 1)
        {
            c++;
        }
        else
        {
            maxi = max(maxi, c);
            c = 1;
        }
    }
    return max(maxi, c);
}
int main()
{
    vector<int> arr = {2, 6, 1, 9, 4, 5, 3};
    cout << longestConsecutiveSubsequence(arr) << endl;
    return 0;
}
