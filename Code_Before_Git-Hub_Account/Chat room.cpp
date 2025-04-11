#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,h = "hello";
    cin>>s;
    int cnt=0;
    for(int i=0,j=0;i<s.size();i++)
    {
        if(s[i] == h[j])
        {
            j++;
            cnt++;
        }
    }
    if(cnt==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
