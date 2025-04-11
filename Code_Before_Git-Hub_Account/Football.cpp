#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i] == '0')
        {
            x++;
            y=0;
        }
        else if(s[i]=='1')
        {
            y++;
            x=0;
        }
        if(x==7 || y==7)
        {
            break;
        }
    }
    if(x==7 || y==7)
    {
        cout<<"YES"<<endl;;
    }
    else
    {
        cout<<"NO"<<endl;
    }

}
