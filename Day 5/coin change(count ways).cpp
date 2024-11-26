#include <iostream>
#include <vector>
using namespace std;
int coin(vector<int> coins, int sum)
{
    int n = coins.size();
    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    if (sum == 0)
        return 1;
    if (sum < 0 or n < 0)
        return 0;
    for (int i : coins)
    {
        for (int j = 0; j <= sum; j++)
        {
            dp[j] += dp[j - i];
        }
    }
    return dp[sum];
}
int main()
{
    vector<int> coins = {1, 2, 3};
    int sum = 4;
    cout << coin(coins, sum) << endl;
}