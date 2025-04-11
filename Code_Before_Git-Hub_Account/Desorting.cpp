#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans = 1e9;
    for(int i = 0;i<n-1;i++)
    {
        if(arr[i+1]<arr[i])
        {
            cout<<"0\n";
            return;
        }
        ans = min (ans, 1+ (arr[i+1] - arr[i])/2);
    }
    cout<<ans<<endl;
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
