#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve()
{
    int n;
    cin>>n;
    std::vector<int> v(n);
    f0_n
    {
        cin>>v[i];
    }

    int i = 0;
    int j = n-1;
    int ans = n;

    while(j>=0 && v[j]==v[n-1])
    {
        j--;
    }

    while(i<n && v[i] == v[n-1])
    {
        i++;
    }

    if(j>=n || i>= n)
    {
        cout<<0<<endl;
        return;
    }

    ans = min(ans, j-i+1);

    j = n-1;
    i = 0;

    while(j>=0 && v[j]==v[0])
    {
        j--;
    }

    while(i<n && v[i] == v[0])
    {
        i++;
    }

    if(j>=n || i>= n)
    {
        cout<<0<<endl;
        return;
    }

    ans = min(ans, j-i+1);
    cout<<ans<<endl;
}
//int32_t main()
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        //cout<<endl;
    }
}

