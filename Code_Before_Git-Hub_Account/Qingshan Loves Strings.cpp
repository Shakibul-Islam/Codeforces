#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(v)	v.begin(),v.end()
#define frn for(int i = 0;i<n;i++)
#define frm for(int i = 0;i<n;i++)
#define frn_1 for(int i = 0;i<n-1;i++)
#define fr1n  for(int i=1;i<n;i++)

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


int positon(string s){
	int p = 0;
            for(int i = 1; i<s.size(); i++)
            {
                if(s[i] == s[i-1])
                {
                    p = i;
                    break;
                }
            }
 return p;
}




//int32_t main()
int main ()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s, ss;
        cin>>s>>ss;

        int cn = 0, j = 0;

        int cn1= 0,cn2 = 0;
        for(int i = 1; i<s.size(); i++)
        {
            if(s[i] == s[i-1])
            {
                cn1++;
            }
        }
        for(int i = 1; i<ss.size(); i++)
        {
            if(ss[i] == ss[i-1])
            {
                cn2++;
            }
        }

        if(n == 1)
        {
            cout<<"YES"<<endl;
        }

        else if(cn1 == 0)
        {
            cout<<"YES"<<endl;
        }

        else if(cn1>1 && cn2>>1)
        {
            cout<<"NO"<<endl;

        }
        else
        {
        	int p = 0;
             while(cn1--){
             	p = positon(s);
             	s.insert(p,ss);
             }
            for(j; j<s.size(); j++)
            {
                if(s[j] == s[j-1])
                {
                    cn++;
                    break;
                }
            }

            if(cn == 0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
}
