#include<bits/stdc++.h>
using namespace std;

#define int long long
#define pb push_back

void solve()
{
    int n;
    cin>>n;

    vector<set<int>>arr;
    set<int>st;

    while(n--)
    {
        int k;
        cin>>k;
        set<int>tempst;

        while(k--)
        {
            int x;
            cin>>x;

            tempst.insert(x);
            st.insert(x);
        }
        arr.pb(tempst);
    }

    int ans = 0;
    for(auto it : st)
    {
        set<int> tempSt;
        for(auto i : arr){
            if(i.count (it) == 0)
            {
                for(auto j : i)
                {
                    tempSt.insert(j);
                }
            }
        }
        ans = max(ans, (int) tempSt.size());
    }
    cout<<ans<<endl;

}

signed main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }

}

