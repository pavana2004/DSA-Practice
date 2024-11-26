#include <iostream>
#include <vector>
using namespace std;

void Occurrence(const vector<int> &arr, int x)
{
    int first = -1, last = -1;

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == x)
        {
            if (first == -1)
                first = i;
            last = i;
        }
    }
    if (first != -1)
    {
        cout << "First Occurrence: " << first << endl;
        cout << "Last Occurrence: " << last << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
int main()
{
    int t, x;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        vector<int> arr;
        int num;
        while (cin.peek() != '\n' && cin >> num)
        {
            arr.push_back(num);
        }
        cin.ignore();
        cin >> x;
        cin.ignore();

        Occurrence(arr, x);
    }
    return 0;
}
