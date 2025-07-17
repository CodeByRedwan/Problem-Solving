// Problem link:https://codeforces.com/problemset/problem/510/A
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
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            if(i%2==0)
            {
                if((i/2)%2==0)
                {
                    if(j==1)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else
                {
                    if(j==k)
                    {
                        cout<<"#";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
            }
            else
            {
                cout<<"#";
            }
        }
        cout<<"\n";
    }

    
    return 0;
}