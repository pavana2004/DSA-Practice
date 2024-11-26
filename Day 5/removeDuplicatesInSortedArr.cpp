#include <iostream>
#include <vector>
using namespace std;

int remove(vector<int> &arr)
{
    int n = arr.size();
    if (n <= 1)
    {
        return n;
    }

    int idx = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            arr[idx] = arr[i];
            idx++;
        }
    }
    return idx;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();

    for (int i = 0; i < t; i++)
    {
        vector<int> arr;
        int num;
        while (cin.peek() != '\n' && cin >> num)
        {
            arr.push_back(num);
        }
        cin.ignore();

        int newSize = remove(arr);
        for (int j = 0; j < newSize; j++)
        {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
