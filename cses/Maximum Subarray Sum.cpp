#include <iostream>
using namespace std;
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int SubArraySum1(int arr[], int n)
{
    int largestsum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int SubArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                SubArraySum += arr[k];
            }
            largestsum = max(largestsum, SubArraySum);
        }
    }
    return largestsum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << SubArraySum1(arr, n) << endl;
    return 0;
}