#include<bits/stdc++.h>
using namespace std;
// #define int long long
#define fr for(int i = 0;i<n;i++)
#define frn_1 for(int i = 0;i<n-1;i++)
#define fr1n  for(int i=1;i<n;i++)
// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


//int32_t main()
int main ()
{
    int t=0;
    cin >> t;
    string ss = "abcdefgh";
    while(t--)
    {
        string s;
        cin>>s;
        char c = s[0];
        int n = s[1]-'0';

        for(int i =1 ;i<9;i++)
        {
        	if(i!=n)
        		{cout<<c<<i<<endl;}
        }
        for(int i = 0;i<8;i++)
        {
            if(c!=ss[i])
                cout<<ss[i]<<n<<endl;
        }

    }
}
