#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

#define all(vsa)	vsa.begin(),vsa.end()
#define f0_n for(int i=0;i<n;i++)

#define f0_n1 for(int iiii = 0;iiii<nnnn-1;iiii++)
#define f1_n  for(int ii=1;ii<nn;ii++)

#define pb(a) push_back(a)
#define arraylength(v) 	end(v)-begin(v)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int n; 		cin>>n;
	std::vector<int> v(n);
	map<int, int>mp;
	f0_n{
		cin>>v[i];
		mp[v[i]]++;
	}
	sort(all(v));
	int ans = 0;
	for(auto it: mp){
		int m = it.second;
		ans += (m*(m-1)*(m-2))/6;
		int indx = lower_bound(all(v),it.first)- v.begin();
		ans += (m*(m-1)/2)*indx;
	}
	cout<<ans<<endl;

}
//int main()
int32_t main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

