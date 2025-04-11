#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int result = (abs(a-b)+9)/10;
        cout<<result<<endl;
    }
}
