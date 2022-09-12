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
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
            freq[a[i]]++;
        ll pairs = 0;
        for (auto x : freq)
        {
            if (x.second > 1)
                pairs = pairs + (x.second) * (x.second - 1) / 2;
        }
        cout << pairs << endl;
    }
    return 0;
}