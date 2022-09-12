#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int cnt[100001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            cnt[a[i]]++;
        }
        if (n % 2 == 0)
            cout << "YES" << endl;
        else
        {

            bool x = true;
            for (int i = 0; i < 100001; i++)
            {
                if (cnt[i] > 1)
                    x = false;
            }
            if (x == true)
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
    }
    return 0;
}