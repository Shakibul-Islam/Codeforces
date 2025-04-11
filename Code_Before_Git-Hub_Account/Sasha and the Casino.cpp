#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int k,x,a; 		cin>>k>>x>>a;

	int last = 1,tot =0;
	std::vector<int> v;
	v.pb(1);
	for (int i = 1; i <x+2; ++i)
	{
		int z1 = tot/(k-1);
		v.pb(z1+1);
		tot += v.back();
		if(tot>a){
			no;
			return;
		}
	}
	yes;
	return;

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

