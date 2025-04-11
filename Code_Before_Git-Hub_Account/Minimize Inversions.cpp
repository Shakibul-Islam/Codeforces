#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define f0_n1 for(int iiii = 0;iiii<nnnn-1;iiii++)
#define f1_n  for(int ii=1;ii<nn;ii++)

#define pb(a) push_back(a)
#define arraylength(v) 	end(v)-begin(v)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int n;		cin>>n;
	std::vector<int> v(n);
	f0_n{
		cin>>v[i];
	}
	std::map<int, int> mp;
	f0_n{
		int b; 		cin>>b;
		mp[v[i]] = b;
	}
	sort(all(v));
	f0_n{
		cout<<v[i]<<' ';
	}
	cout<<endl;
	f0_n{
		cout<<mp[v[i]]<<' ';
	}
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

