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
        ll w, x, y, z;
        cin >> w >> x >> y >> z;
        cout << w + (x - y) * z << endl;
    }
    return 0;
}