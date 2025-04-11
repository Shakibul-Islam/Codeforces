#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;

    int power = 1;
    while(t--)
    {
        cin>>n;
        vector<int>ans;
        while(n>0)
        {
            if(n%10>0)
            {
                ans.push_back((n%10)*power);
            }
            n/=10;
            power *= 10;
        }
        power = 1;
        cout<<ans.size()<<endl;
        for(auto number : ans)
        {
            cout<<number<<" ";
        }
        cout<<endl;
    }
}
