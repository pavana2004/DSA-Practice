#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

bool large(const string &x, const string &y)
{
    return x + y > y + x;
}

string largestNumber(vector<int> &arr)
{
    vector<string> strArr(arr.size());
    transform(arr.begin(), arr.end(), strArr.begin(), [](int num)
              { return to_string(num); });

    sort(strArr.begin(), strArr.end(), large);

    string result = accumulate(strArr.begin(), strArr.end(), string());
    return result[0] == '0' ? "0" : result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int &num : arr)
            cin >> num;
        cout << largestNumber(arr) << endl;
    }
    return 0;
}
