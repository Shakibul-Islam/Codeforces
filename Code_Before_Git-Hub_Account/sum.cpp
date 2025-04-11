#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int i,l,e;
        cin>>i>>l>>e;
        int bigShakib = max({i,l,e});
        int sumShakib = i+l+e;
        sumShakib = sumShakib-bigShakib;
        if(sumShakib==bigShakib)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
