
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

	int n; 	cin>>n;
	std::vector<int> v(n);
	vector<int> a(n);
	f0_n{
		cin>>v[i];
		a[i] = v[i] + i+1;
	}
	//sort(a.end(),a.begin());

	f0_n cout<<a[i]<<" ";


}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

