#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        if (n == 1)
            cout << a[0] * a[0] << " " << a[0] * a[0] << endl;
        else if (a[0] >= 0 && n != 1)
            cout << a[0] * a[0] << " " << a[n - 1] * a[n - 1] << endl;
        else if (a[n - 1] <= 0 && n != 1)
            cout << a[n - 1] * a[n - 1] << " " << a[0] * a[0] << endl;

        else
        {
            ll i;
            ll min_negative = a[0];
            ll max_positve = a[n - 1];
            ll max_negative, min_positive;
            for (i = 0; i < n; i++)
            {
                if (a[i] >= 0)
                {
                    max_negative = a[i - 1];
                    min_positive = a[i];
                    break;
                }
            }
            ll ans1, ans2;
            ans2 = max(min_negative * min_negative, max_positve * max_positve);
            ans1 = min_negative * max_positve;
            cout << ans1 << " " << ans2 << endl;
        }
    }
    return 0;
}