#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxArea(vector<int> &height)
{
    int l = 0, r = height.size() - 1, area = 0;
    while (l < r)
    {
        area = max(area, (r - l) * min(height[l], height[r]));
        if (height[l] < height[r])
            l++;
        else
            r--;
    }
    return area;
}
int main()
{
    vector<int> height = {1, 5, 4, 3};
    cout << maxArea(height) << endl;
}