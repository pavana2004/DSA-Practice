#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void repeat(const vector<int> &arr)
{
    int min = -1;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        for (int j = i - 1; j >= 0; j--)
        {
            if (arr[i] == arr[j])
            {
                min = i;
                break;
            }
        }
        if (min != -1)
            break;
    }
    if (min != -1)
        cout << arr[min] << endl;
    else
        cout << "-1" << endl;
}
