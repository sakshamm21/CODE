#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int a[n - 1];
    for (int i = 0; i < n - 1; i++)
        cin >> a[i];
    sort(a, a + n - 1);
    int i = 1;
    for (i = 1; i <= n - 1; i++)
    {
        if (a[i - 1] != i)
            break;
    }
    cout << i;
    return 0;
}