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
const int N = 1e5+10;
const int M = 1e9+7;


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	ll n; cin>>n;
	vector<ll>v(n);
	f0_n	cin>>v[i];

	sort(all(v));

	if(v[0]== v[n-1]  && n>2){
		cout<<"-1"<<endl;
		return;
	}
	ll l = n/2 + 1;
	ll r = n-l;
	cout<<l<< " "<<r<<" "<<endl;
	for(ll i=0;i<l;i++) cout<<v[i]<<" ";
	cout<<endl;
	for(ll i=l;i<n;i++) cout<<v[i]<<" ";
	cout<<endl;



}


//int32_t main()
int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

