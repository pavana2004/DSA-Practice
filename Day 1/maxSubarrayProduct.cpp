#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subarrprod(const vector<int> &arr)
{
    int n = arr.size();
    int maxi = arr[0];
    int curr_max = arr[0];
    int curr_min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 0)
            swap(curr_max, curr_min);

        curr_max = max(arr[i], curr_max * arr[i]);
        curr_min = min(arr[i], curr_min * arr[i]);

        maxi = max(maxi, curr_max);
    }
    return maxi;
}

int main()
{
    vector<int> arr = {-2, 6, -3, -10, 0, 2};
    cout << subarrprod(arr);
    return 0;
}
