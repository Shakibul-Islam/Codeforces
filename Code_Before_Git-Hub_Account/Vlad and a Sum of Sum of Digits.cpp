#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<=n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
const int N = 2e5+1;

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int sum(int a)
{
    int r=0;
    while(a)
    {
        r += a%10;
        a = a/10;
    }
    return r;
}


//int main()
int32_t main()
{
    vector<int> v(N);

    for(int j = 1; j<N; j++)
    {
        v[j] = v[j-1] + sum(j);
    }

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<v[n];
        cout<<endl;
    }
}

