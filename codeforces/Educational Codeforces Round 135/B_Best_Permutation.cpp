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
        if (n == 4)
            cout << "2 1 3 4" << endl;
        if (n == 5)
            cout << "1 2 3 4 5" << endl;
        if (n >= 6)
        {
            if (n % 2 == 0)
            {
                int num = n - 2;
                a[n - 1] = n;
                a[n - 2] = n - 1;
                for (int i = 0; i < n - 2; i++)
                {
                    a[i] = num;
                    num--;
                }
                for (int i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << endl;
            }

            else
            {
                int num = n - 2;
                a[n - 1] = n;
                a[n - 2] = n - 1;
                a[0] = 1;
                for (int i = 1; i < n - 2; i++)
                {
                    a[i] = num;
                    num--;
                }
                for (int i = 0; i < n; i++)
                    cout << a[i] << " ";
                cout << endl;
            }
        }
    }
    return 0;
}