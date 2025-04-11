#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    int n,k;
    for(int i =1;i<=t;i++)
    {
        cin>>n>>k;
        int minimum_one = ceil(( (float) (n-1)/k))+1;
        cout<<minimum_one<<endl;
    }
}
