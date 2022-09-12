// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     cout.tie(NULL);
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n;
//         cin >> n;
//         ll A[n], B[n];
//         for (ll i = 0; i < n; i++)
//             cin >> A[i];
//         for (ll i = 0; i < n; i++)
//             cin >> B[i];
//         vector<ll> a(A, A + n);
//         vector<ll> b(B, B + n);
//         // sort(a.begin(), a.end());
//         // sort(b.begin(), b.end());
//         ll score[n] = {0};
//         ll i = 0, j = 0;
//         for (i = 0; i < n; i++)
//         {
//             for (j = 0; j < n; j++)
//             {
//                 if (i != j)
//                 {
//                     if (a[i] < a[j] && b[i] < b[j])
//                         score[i] += 0;
//                     else
//                         score[i] += 1;
//                 }
//             }
//         }
//         vector<ll> s(score, score + n);
//         ll x = *max_element(s.begin(), s.end());
//         ll ans = count(s.begin(), s.end(), x);
//         cout << ans << endl;
//     }
//     return 0;
// }

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
        vector<int> arr(n), brr(n), temp1(n), temp2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            temp1[i] = arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> brr[i];
            temp2[i] = brr[i];
        }

        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());

        temp1.erase(unique(temp1.begin(), temp1.end()), temp1.end());
        temp2.erase(unique(temp2.begin(), temp2.end()), temp2.end());

        for (int i = 0; i < n; i++)
        {
            arr[i] = lower_bound(temp1.begin(), temp1.end(), arr[i]) - temp1.begin();
        }

        for (int i = 0; i < n; i++)
        {
            brr[i] = lower_bound(temp2.begin(), temp2.end(), brr[i]) - temp2.begin();
        }

        int temp = 0, ans = 0;
        vector<int> p(n), q(n), r, crr(n);
        for (int i = 0; i < n; i++)
        {
            crr[arr[i]] = brr[i];
            p[i] = arr[i] + brr[i];
            q[brr[i]] = i;
        }

        for (int i = 0; i < n; i++)
        {
            r.insert(upper_bound(r.begin(), r.end(), crr[i]), crr[i]);
            p[q[crr[i]]] -= lower_bound(r.begin(), r.end(), crr[i]) - r.begin();
        }

        for (auto i : p)
            temp = max(i, temp);

        for (auto i : p)
            ans += (i == temp);

        cout << ans << endl;
    }
    return 0;
}