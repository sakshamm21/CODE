#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 1, max = 1;
    for (int i = 0; i < n-1; i++)
    {
        count = 0;
        while (s[i] == s[i + 1]){
            count++;
            if(i==n-2) break;
        }
        if (count > max)
            max = count;
    }
    cout << max;
    return 0;
}