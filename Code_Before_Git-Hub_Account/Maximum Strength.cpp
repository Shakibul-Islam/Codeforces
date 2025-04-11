#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string L,R;
        cin>>L>>R;
        while(L.size()<R.size())
        {
            L = "0"+L;
        }
        while(R.size()<L.size())
        {
            R = "0"+R;
        }
        bool take9 = false;
        long long ans = 0;
        for(int i = 0; i<L.size();i++)
        {
            if(take9)
            {
                ans +=9LL;
                continue;
            }
            if(L[i] != R[i])
            {
                ans += (abs(L[i]- R[i]));
                take9 = true;
            }
        }
        cout<<ans<<endl;
    }
}
