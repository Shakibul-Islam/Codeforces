#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::toupper);
    set<char>st;
    for(int i=0; i<s.size();i++)
    {
        st.insert(s[i]);
    }
    int len = st.size();
    if(len == 26)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
