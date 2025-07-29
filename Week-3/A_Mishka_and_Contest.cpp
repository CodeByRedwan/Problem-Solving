// Problem link:https://codeforces.com/contest/999/problem/A
#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define nl '\n'
#define ll long long int
#define pb push_back

int main()
{
    fastio();
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int i=0,j=n-1;
    int cnt=0;
    while(i<=j)
    {
        if(v[i]<=k)
        {
            i++;
            cnt++;
        }
        else if(v[j]<=k)
        {
            j--;
            cnt++;
        }
        else 
        {
            break;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}