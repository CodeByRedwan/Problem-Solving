// Problem link:https://codeforces.com/problemset/problem/1866/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]<0)
        {
            v[i]=v[i]*-1;
        }
    }
    cout<<*min_element(v.begin(),v.end());
    
    return 0;
}