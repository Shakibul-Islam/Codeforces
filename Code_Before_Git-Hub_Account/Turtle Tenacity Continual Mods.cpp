#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n; i >0; i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int n; 		cin>>n;
	std::vector<ll> v(n);
	f0_n cin>>v[i];
	std::map<ll, ll> mp;
	ll mn = INT_MAX;

	f0_n{
		mp[v[i]]++;
		mn = min(mn,v[i]);
	}

	if(mp[mn] == 1){
		yes;
		return;
	}
	else{
		f0_n{
			if((v[i]%mn) != 0){
				yes;
				return;
			}
		}
		no;
	}

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}


