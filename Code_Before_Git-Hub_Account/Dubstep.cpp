#include<bits/stdc++.h>
using namespace std;
#define            pb                push_back

int main()
{
    string s;
    cin>>s;
    string w = "WUB";
    int count = 0;
    for(int i = 0;i<s.size();i++)
    {
        string s1;
        s1.pb(s[i]);
        s1.pb(s[i+1]);
        s1.pb(s[i+2]);

        if( s1 != w )
        {
            cout<<s[i];
            count = 1;
        }
        else{
            i +=2;
            if(count == 1)
            {
                cout<<" ";
            }
            continue;
        }
    }
}
