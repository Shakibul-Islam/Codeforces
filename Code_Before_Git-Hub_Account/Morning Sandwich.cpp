#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;      cin>>t;
    while(t--)
    {
        int b,c,h;          cin>>b>>c>>h;
        int cnt = 1;
        for(int i = b-1;i>0;)
        {
            if(c>0)
            {
                c--;
                cnt++;
                i--;
            }
            else if(h>0)
            {
                h--;
                cnt++;
                i--;
            }
            cnt++;
            if(c==0 && h==0)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
