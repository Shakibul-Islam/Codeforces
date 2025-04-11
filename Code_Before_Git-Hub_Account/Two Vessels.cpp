#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int sub = abs(a-b);
        cout<<std::ceil(sub/(2.0*c))<<endl;
    }
}
