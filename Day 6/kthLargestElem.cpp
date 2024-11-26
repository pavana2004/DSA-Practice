#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int element_finder(vector<int> &arr, int n)
{
    sort(arr.rbegin(), arr.rend());
    return arr[n - 1];
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int num;
        vector<int> arr;
        while (cin >> num)
        {
            arr.push_back(num);
            if (cin.get() == '\n')
                break;
        }
        cin >> n;
        cout << element_finder(arr, n) << endl;
    }
    return 0;
}
