#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve()
{
    int x,n;
    cin>>x>>n;
    int ans = 1;
    for(int i=1; i*i<=x; i++)
    {
        if(x%i==0)
        {
            if(n<=x/i)
                ans=max(ans,i);
            if(n<=i)
                ans=max(ans,x/i);
        }
    }
    cout << ans << '\n';
}
//int main()
int32_t main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        //cout<<endl;
    }
}

