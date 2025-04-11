#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k, l, c, d, p, nl, np;
    int need[3];
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    need[0] = (k*l)/nl;
    need[1] = (c*d);
    need[2] = (p/np);
    sort(need,need+3);
    cout<<(need[0]/n)<<endl;
}
