#include <iostream>
#include <vector>
using namespace std;
int search(const vector<int> &arr, int key)
{
    int l = 0, r = arr.size() - 1;
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] >= arr[l])
        {
            if (arr[l] <= key and key < arr[mid])
                r = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (arr[mid] < key and key <= arr[r])
                l = mid + 1;
            else
                r = mid - 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2};
    int key = 0;
    cout << search(arr, key) << endl;
}