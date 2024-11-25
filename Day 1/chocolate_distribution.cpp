#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int choco(vector<int> &arr, int m)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    int a = __INT_MAX__;
    for (int i = 0; i <= n - m; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        a = min(a, diff);
    }
    return a;
}
int main()
{
    vector<int> arr = {7, 3, 2, 4, 9, 12, 56};
    int m = 3;
    cout << choco(arr, m) << endl;
}