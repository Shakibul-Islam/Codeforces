#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int count=0;
        string s, s1 = "codeforces";
        cin>>s;
        for(int i=0;i<10;i++)
        {
            if(s[i]==s1[i])
            {
                continue;
            }
            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
}
