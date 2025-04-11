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
	int n; 		cin>>n;
	std::vector<int> v(2*n);
	for(int i = 0;i<2*n;i++){
		cin>>v[i];
	}
	int ans = 0;
	sort(v.begin(),v.end());
	for(int i = 0;i<2*n;i += 2){
		ans += min(v[i], v[i+1]);
	}
	cout<<ans<<endl;


}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

