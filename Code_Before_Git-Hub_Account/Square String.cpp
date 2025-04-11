#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len = s.size();
        int half = len/2;
        int xe = len/2;
        int count = 0;

        if(len%2 == 0)
        {
            for(int i = 0; i<len; i++)
            {
                if(s[i] == s[half])
                {
                    count++;
                }
                half++;
            }
            if(count == xe)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
