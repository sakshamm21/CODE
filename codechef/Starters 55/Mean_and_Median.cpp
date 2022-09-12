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
        int x, y;
        cin >> x >> y;
        int z = 3 * x - 2 * y;
        if (z > y)
            cout << y << " " << y << " " << z << endl;
        else
            cout << z << " " << y << " " << y << endl;
    }
    return 0;
}