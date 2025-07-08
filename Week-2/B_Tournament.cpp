    // Problem link:https://codeforces.com/contest/2123/problem/B
    #include <bits/stdc++.h>
    using namespace std;
    #define fastio() ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    #define nl '\n'
    #define ll long long int
    int main()
    {
        
        
        fastio();
        int t;
        cin>>t;
        while(t--)
        {
            int n,j,k;
            cin>>n>>j>>k;
            vector<int>v(n);
            for(int i=0;i<n;i++)
            {
                cin>>v[i];
            }
            int mx=*max_element(v.begin(),v.end());
            if(k==1)
            {
                if(mx==v[j-1])
                {
                    cout<<"YES"<<'\n';
                }
                else
                {
                    cout<<"NO"<<"\n";
                }
            }
            else if(k>=2)
            {
                cout<<"YES"<<'\n';
            }
        }
        return 0;
    }