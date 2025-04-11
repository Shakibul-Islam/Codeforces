#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int up = 0, lo = 0;
    for(int i = 0; i<s.size();i++){
        if('a'<=s[i]&&s[i]<='z')
            lo++;
        else
            up++;
    }
    if(up>lo)
    {
        for(int i = 0;i<s.size();i++){
            s[i]= toupper(s[i]);
        }
    }
    else if(lo>up || lo == up){
        for(int i = 0;i<s.size();i++){
            s[i]= tolower(s[i]);
        }
    }
    cout<<s<<endl;
}
