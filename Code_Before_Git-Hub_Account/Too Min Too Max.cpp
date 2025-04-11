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
	std::vector<int> v(n);
	f0_n cin>>v[i];

	sort(all(v));

	int ans = abs(v[0]-v[n-1]) + abs(v[1]-v[n-1]) + abs(v[0] - v[n-2]) + abs(v[1] - v[n-2]);
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


