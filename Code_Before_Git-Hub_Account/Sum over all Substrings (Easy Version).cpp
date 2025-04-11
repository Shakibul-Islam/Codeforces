#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define pb push_back
#define mp make_pair
#define nline "\n"
#define f first
#define s second
#define pll pair<ll,ll>
#define all(x) x.begin(),x.end()
const ll MOD=1e9+7;
const ll MAX=500500;
ll f(string s)
{
    ll len=s.size(),ans=0,pos=0;
    while(pos<len)
    {
        if(s[pos]=='1')
        {
            ans++;
            pos+=2;
        }
        pos++;
    }
    return ans;
}
void solve()
{
    ll n,ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(ll i=0; i<n; i++)
    {
        string t;
        for(ll j=i; j<n; j++)
        {
            t.push_back(s[j]);
            ans+=f(t);
        }
    }
    cout<<ans<<nline;
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif
    ll test_cases=1;
    cin>>test_cases;
    while(test_cases--)
    {
        solve();
    }
    cout<<fixed<<setprecision(10);
    cerr<<"Time:"<<1000*((double)clock())/(double)CLOCKS_PER_SEC<<"ms\n";
}
