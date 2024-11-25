#include <iostream>
#include <vector>
using namespace std;
int trap(vector<int> &height)
{
    int l = 0, r = height.size() - 1, left = 0, right = 0, water = 0;
    while (l <= r)
    {
        if (height[l] <= height[r])
        {
            if (height[l] >= left)
                left = height[l];
            else
                water += left - height[l];
            l++;
        }
        else
        {
            if (height[r] >= right)
                right = height[r];
            else
                water += right - height[r];
            r--;
        }
    }
    return water;
}
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    vector<int> height(n);
    for (int i = 0; i < n; i++)
    {
        cout << "height: ";
        cin >> height[i];
    }
    cout << trap(height) << endl;
}