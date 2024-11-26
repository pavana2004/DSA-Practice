#include <iostream>
#include <vector>
#include <sstream>
#include <limits.h> // For INT_MAX
using namespace std;

int stock(const vector<int> &arr)
{
    int minPrice = arr[0];
    int maxProfit = 0;

    for (size_t i = 1; i < arr.size(); i++)
    {
        minPrice = min(minPrice, arr[i]);
        maxProfit = max(maxProfit, arr[i] - minPrice);
    }

    return maxProfit;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        string line;
        getline(cin, line);
        stringstream ss(line);

        vector<int> arr;
        int num;
        while (ss >> num)
        {
            arr.push_back(num);
        }

        cout << stock(arr) << endl;
    }

    return 0;
}
