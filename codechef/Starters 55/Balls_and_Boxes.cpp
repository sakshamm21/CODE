#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum = k * (k + 1) / 2;
        if (n >= sum)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}