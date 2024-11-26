#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int distance(string s1, string s2)
{
    int m = s1.length(), n = s2.length();
    vector<vector<int>> dp(m + 1, vector<int>(n + 1));

    for (int i = 0; i <= m; ++i)
        for (int j = 0; j <= n; ++j)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else
                dp[i][j] = min({dp[i - 1][j] + 1, dp[i][j - 1] + 1, dp[i - 1][j - 1] + (s1[i - 1] != s2[j - 1])});
        }

    return dp[m][n];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << distance(s1, s2) << endl;
    }
    return 0;
}
