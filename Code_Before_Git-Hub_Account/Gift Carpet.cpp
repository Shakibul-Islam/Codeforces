#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;

    string s;
    for(int i=1; i<=t; i++)
    {
        int m,n;
        cin>> n>>m;

        for(int j=1; j<=n; j++)
        {
            cin>>s;
            string s3 = s;
            if(n>3 && s3==s)
            {
                for(int k=0; k<s.size(); k++)
                {
                    if(s[i]=='v' || s[i]=='i' || s[i]=='k' || s[i]=='a' )
                        s[i]=s[i];
                    else
                        continue;
                }
            }

        }
        cout<<s<<endl;
        string s1 = "vika";
        if(s==s1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


}


