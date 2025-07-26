// Problem link:https://codeforces.com/problemset/problem/1878/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();
    int t;
    cin >> t;
    while(t--)
    {
        int n,m;
        cin >> n >> m;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }  
        bool found = false; 
            for(int i = 0; i < n; i++)
            {
                if((v[i]==m))
                {
                    found = true;
                    break;
                }
            }
        if(found)
            cout<<"YES"<< nl;   
        else
            cout<<"NO"<< nl;
    }
    
    return 0;
}