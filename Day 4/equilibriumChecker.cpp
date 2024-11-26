#include <iostream>

using namespace std;

int findEquilibriumPoint(int arr[], int n)
{
    if (n == 1)
        return 1;
    long long totalSum = 0, leftSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        totalSum -= arr[i];
        if (leftSum == totalSum)
            return i + 1;
        leftSum += arr[i];
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = findEquilibriumPoint(arr, n);
    if (result != -1)
        cout << "Equilibrium Point: " << result << endl;
    else
        cout << "No Equilibrium Point" << endl;
    return 0;
}
