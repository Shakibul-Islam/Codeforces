#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



//int32_t main()
int main(){
    int t;
    cin>>t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(t--)
    {
        int n;
        cin>>n;
        std::map<char, int> mp;
        for(int i = 0;i<26;i++)
        {
            mp[s[i]] = 0;
        }
        std::vector<int> v(n);
        f0_n
        {
            cin>>v[i];
            for(auto it: mp)
            {
                if(it.second == v[i])
                {
                    cout<<it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }

        cout<<endl;
    }
}

