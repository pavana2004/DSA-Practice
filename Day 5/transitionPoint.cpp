#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int transition(const vector<int> &arr)
{
    int low = 0;
    int high = arr.size() - 1;
    int i = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == 1)
        {
            i = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    return i;
}
