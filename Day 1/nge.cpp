#include <iostream>
#include <vector>
using namespace std;
void nextGreaterElement(const vector<int> &arr)
{
    int n = arr.size();
    for (int i = 0; i < n; ++i)
    {
        int nge = -1;
        for (int j = i + 1; j < n; ++j)
        {
            if (arr[j] > arr[i])
            {
                nge = arr[j];
                break;
            }
        }
        cout << arr[i] << " --> " << nge << endl;
    }
}
int main()
{
    vector<int> arr = {4, 5, 2, 25};
    nextGreaterElement(arr);
    return 0;
}