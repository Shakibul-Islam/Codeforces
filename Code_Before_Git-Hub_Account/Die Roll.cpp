#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int x,y;
    cin>>x>>y;
    int a = max(x,y);
    int  p = 6+1-a;
    int  d = __gcd(p,6);
    cout<<p/d<<"/"<<6/d<<endl;
}
