#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int triplet(vector<int> &arr, int n, int x)
{
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1;
        while (l < r)
        {
            int s = arr[i] + arr[l] + arr[r];
            if (s == x)
                return 1;
            if (s < x)
                l++;
            else
                r--;
        }
    }
    return 0;
}
int main()
{
    int n = 6;
    vector<int> arr = {1, 4, 45, 6, 10, 8};
    int x = 13;
    cout << triplet(arr, n, x) << endl;
}