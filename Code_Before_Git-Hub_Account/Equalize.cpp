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
	std::vector<int> v(n),v2;
	f0_n{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	v.erase(unique(v.begin(),v.end()),v.end());
	int mx = 1;
	for(int i = 0;i<v.size();i++){
		int k = v[i]+n-1;
		int it = upper_bound(v.begin(),v.end(),k)-v.begin()-i;
		mx = max(mx,it);
	}
	cout<<mx<<endl;

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}


