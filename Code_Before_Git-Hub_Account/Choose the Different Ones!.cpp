#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int n,m,k; 		cin>>n>>m>>k;
	std::vector<int> v(n), v2(n);
	map<int,int>mp;
	f0_n{
		cin>>v[i];
		mp[v[i]] = 1;
	}
	for(int i = 0;i<m;i++){
		cin>>v2[i];
		if(mp[v2[i]] == 1) mp[v2[i]] = 9;
		else if(mp[v2[i]] == 0) mp[v2[i]] = 2;
	}
	int a = k/2, b = k/2;
	for(int i = 1;i<=k;i++){
		if(mp[i] == 1) a--;
		if(mp[i] == 2) b--;
		if(mp[i] == 0) a = -1;
	}
	if(a>=0 && b>=0) yes;
	else no;

}
//int main()
int32_t main()
{
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

