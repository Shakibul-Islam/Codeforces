#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;
    for(int j = 1; j<=n; j++)
    {
        cin>>s;
        int x = s.size();
        for(int i = 0; i<s.size()-1; i++)
        {
            if(i%2!=0 && i<s.size())
                continue;
            else
                cout<<s[i];
        }
        cout<<s[x-1]<<endl;
    }
}
