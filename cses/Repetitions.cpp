#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 1, maxx = 1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
            maxx = max(maxx, count);
        }
        else if (s[i] != s[i - 1])
        {
            maxx = max(maxx, count);
            count = 1;
        }
    }
    cout << maxx;
    return 0;
}