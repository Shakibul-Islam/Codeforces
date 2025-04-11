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
    f0_n{
        cin>>v[i];
    }

    vector<int>position(n,0);
    for(int i = 1; i<n; i++)
    {
        if(v[i]!=v[i-1])
        {
            int k = i-1;
            while(position[k] == 0)
            {
                position[k] = i-1;
                k--;
            }
        }
    }
    position[n-1] = -1;
    int q;
    cin>>q;
    while(q--)
    {
        int left, right;
        cin>>left>>right;
        if (position[left-1]<=right && position[left-1]!=0)
        {
            cout<<left<<' '<<position[left-1]<<endl;
        }
        else cout<<-1<<' '<<-1<<endl;
    }
    cout<<endl;

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

