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
	std::vector<int> v(n);
	f0_n{
		v[i] = i+1;
	}

	for(int i = 0;i<n/2; i++){
		cout<<v[n-1-i]<<" "<<v[i]<<" ";
	}
	if(n%2 != 0) cout<<v[n/2];




}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

