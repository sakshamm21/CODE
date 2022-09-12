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
        float a, b, x, y;
        cin >> a >> b >> x >> y;
        float s1 = a / x;
        float s2 = b / y;
        if (s1 > s2)
            cout << "Alice" << endl;
        if (s2 > s1)
            cout << "Bob" << endl;
        if (s1 == s2)
            cout << "Equal" << endl;
    }
    return 0;
}