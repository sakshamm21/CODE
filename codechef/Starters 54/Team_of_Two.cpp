#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<set<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 0; j < x; j++)
        {
            int v;
            cin >> v;
            arr[i].insert(v);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            bool y = true;
            for (int pop = 1; pop <= 5; pop++)
            {
                y &= arr[i].count(pop) || arr[j].count(pop);
            }
            if (y)
            {
                cout << "YES" << endl;
                return;
            }
        }
        // cout << "NO" << endl;
    }
    cout << "NO" << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        // int n;
        // cin>>n;
        // vector<set<int>> arr(n);
        // for(int i=0;i<n;i++){
        //     int x;
        //     cin>>x;
        //     for(int i=0;i<n;i++){
        //         int v;
        //         cin>>v;
        //         arr[i].insert(v);
        //     }
        // }

        // for(int i=0;i<n;i++){
        //     for(int j=i+1;j<n;j++){
        //         bool x=true;
        //         for(int pop=1;pop<=5;pop++){x &= arr[i].count(pop) || arr[j].count(pop);}
        //         if(x){ cout<<"YES"<<endl;return;}
        //     }
        // }
        // cout<<
        // }
    }
    return 0;
}