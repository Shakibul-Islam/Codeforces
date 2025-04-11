#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s,s2;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '+')
        {
            s2 += s[i];
        }
        
    }
    sort(s2.begin(),s2.end());
    cout<<s2[0];
    for (int i = 1; i < s2.size(); i++)
    {
        cout <<"+"<<s2[i];
    }
    cout<<endl;
 
}