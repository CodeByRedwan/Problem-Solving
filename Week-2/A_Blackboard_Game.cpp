// Problem link:https://codeforces.com/contest/2123/problem/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
int main()
{
    // int cs = 0;
    // cout << "Case " << ++cs << ": ";
    fastio();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=2)
        {
            cout<<"Alice"<<'\n';
        }
        else
        {
            if(n%2!=0)
            {
                cout<<"Alice"<<'\n';
            }
            else
            {
                cout<<"Bob"<<'\n';
            }
        }
    }
    return 0;
}