#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;      cin>>t;
    while(t--)
    {
        int n;      cin>>n;
        string s;       cin>>s;
        set<string,int>st;
        for(int i=0;i<n-1;i++)
        {
            string s2 = s;
            string s1 = s2.erase(i,2);
            st.insert(s1);
        }
        cout<<st.size()<<endl;
    }
}
