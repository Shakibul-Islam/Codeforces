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
    int sum = 0,x=n;
    std::vector<int> v(n);
    f0_n
    {
        cin>>v[i];
        sum += v[i];
    }
    int k = sum/n;
    int ok = 0;
    for(int i =0; i<n; i++)
    {
        if(v[i] < k)
        {
            ok = 0;
            break;
        }
        else
        {
            v[i+1] += v[i] -k;
            v[i]= k;
            ok = 1;
        }
    }
    if(ok) yes;
    else no;
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

