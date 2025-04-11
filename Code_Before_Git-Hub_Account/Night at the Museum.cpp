#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sum = 0;
    sum = min(abs(s[0]-'a'), 26-abs('a' - s[0]));
    if(s.size()>2)
    {
        for(int i =1; i<s.size(); i++)
        {
            int clock = abs(s[i]-s[i-1]);
            int unclock = 26-abs(s[i]-s[i-1]);
            sum += min(clock,unclock);
        }
    }
    cout<<sum<<endl;
}
