#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int b = count(s.begin(),s.end(),'B');
        int a = count(s.begin(),s.end(),'A');

        if(b==k)
        {
            cout<<0<<endl;
        }
        else if(b<k) // B
        {
            int cnt = 0;
            for(int i =0;i<n;i++)
            {
                if(s[i] == 'A')
                    cnt ++;
                if(cnt == k-b)
                {
                    cout<<1<<endl<<i+1<< " "<<"B"<<endl;
                    break;
                }
            }
        }

        else
        {
            int cnt = 0;
            for(int i =0;i<n;i++)
            {
                if(s[i] == 'B')
                    cnt ++;
                if(cnt == b-k)
                {
                    cout<<1<<endl<<(i+1)<< " "<<"A"<<endl;
                    break;
                }
            }
        }

    }
}
