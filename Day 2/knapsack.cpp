#include <iostream>
#include <vector>
using namespace std;
int knapsack(int capacity, int w[], int val[], int n)
{
    vector<int> dp(capacity + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = capacity; j >= w[i]; j--)
        {
            dp[j] = max(dp[j], val[i] + dp[j - w[i]]);
        }
    }
    return dp[capacity];
}
int main()
{
    int val[] = {10, 40, 30, 50};
    int w[] = {5, 4, 6, 3};
    int capacity = 5;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapsack(capacity, w, val, n) << endl;
}