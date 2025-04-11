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
    int n,m;
    cin>>n>>m;
    std::vector<int> v(n);
    vector<int> ans(n);
    f0_n cin>>v[i];

    string s;
    cin>>s;

    int p = 1;
    for(int j = 0; j<n; j++)
    {
        p *= v[j];
    }
    int b = p%m;
    ans[0] = b;


    int low = 0;
    int w = n-1;

    for(int i = 1; i<n; i++)
    {
        p = 1;

        if(s[i] == 'L')
        {
            v[low] = 1;
            low++;
            for(int j = 0; j<n; j++)
            {
                p *= v[j];
            }
            int a = p%m;
            ans[i] = a;
        }

        else if(s[i]=='R')
        {
            v[w] = 1;
            w--;
            p = 1;
            for(int j = 0; j<n; j++)
            {
                p *= v[j];
            }
            int a = p%m;
            ans[i]=a;
        }
    }
    f0_n
    {
        cout<<ans[i]<<" ";
    }


}
//int32_t main()
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
        cout<<endl;
    }
}

