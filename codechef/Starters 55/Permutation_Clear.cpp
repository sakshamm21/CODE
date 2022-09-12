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
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int k;
        cin >> k;
        set<int> s;
        for (int i = 0; i < k; i++)
        {
            int x;
            cin >> x;
            s.insert(x);
        }

        for (int i = 0; i < n; i++)
        {
            if (s.count(a[i]))
                continue;
            else
                cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}