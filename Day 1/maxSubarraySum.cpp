#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int subarrsum(const vector<int> &arr)
{
    int a = arr[0];
    int b = arr[0];
    for (int i = 0; i < arr.size(); i++)
    {
        a = max(arr[i], arr[i] + a);
        b = max(a, b);
    }
    return b;
}
int main()
{
    vector<int> arr = {-2, -4};
    cout << subarrsum(arr) << endl;
}