#include <iostream>
#include <vector>
using namespace std;
int rowWithMostOnes(const vector<vector<int>> &arr)
{
    int maxRow = -1, row = 0, col = arr[0].size() - 1;
    while (row < arr.size() && col >= 0)
    {
        if (arr[row][col] == 1)
        {
            maxRow = row;
            col--;
        }
        else
        {
            row++;
        }
    }

    return maxRow;
}
int main()
{
    vector<vector<int>> arr = {{0, 1, 1, 1}, {0, 0, 1, 1}, {1, 1, 1, 1}, {0, 0, 0, 0}};
    cout << rowWithMostOnes(arr) << endl;
    return 0;
}
