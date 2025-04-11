#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    getline(cin,s);
    set<char>st;
    for(int i = 0;i<s.size();i++)
    {
        st.insert(s[i]);
    }

    st.erase('{');
    st.erase('}');
    st.erase(',');
    st.erase(' ');

    cout<<st.size()<<endl;
}
