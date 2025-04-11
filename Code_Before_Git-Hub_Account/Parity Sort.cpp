#include<bits/stdc++.h>
using namespace std;

void solve()
{
    long int n;
    cin>>n;
    vector<int>a(n), b(n);
    for(int i = 0;i<n;i++)
    {
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end());
    for(int i = 0;i<n;i++)
    {
        if( (a[i]%2) != (b[i]%2) )
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;

}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
