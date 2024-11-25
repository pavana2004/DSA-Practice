#include <iostream>
#include <vector>
using namespace std;
int floor(const vector<int> &arr, int k)
{
    int l = 0, r = arr.size() - 1, res = -1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] <= k)
        {
            res = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 2, 8, 10, 11, 12, 19};
    int k = 5;
    cout << floor(arr, k);
}