#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool equal(const vector<int> &arr1, const vector<int> &arr2)
{
    if (arr1.size() != arr2.size())
        return false;
    vector<int> a1 = arr1, a2 = arr2;
    sort(a1.begin(), a1.end());
    sort(a2.begin(), a2.end());
    for (int i = 0; i < a1.size(); i++)
    {
        if (a1[i] != a2[i])
            return false;
    }
    return true;
}
int main()
{
    vector<int> arr1 = {1, 2, 5}, arr2 = {2, 4, 15};
    if (equal(arr1, arr2))
        cout << "true" << endl;
    else
        cout << "false" << endl;
}