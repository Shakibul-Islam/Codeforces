#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ma=0,maxi=0;
    int mi=101,mini=0;
    int h;
    for(int i = 0; i<n; i++)
    {
        cin>>h;
        if(h>ma) ma=h, maxi= i;
        if(h<=mi) mi=h, mini=i;
    }
    if(maxi>mini)
        mini++;

    cout<<maxi+(n-1)-mini<<endl;
}
