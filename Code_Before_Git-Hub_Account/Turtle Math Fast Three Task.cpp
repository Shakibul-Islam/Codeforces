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
	std::vector<int> a(n);

	ll int sum = 0, codd = 0, ceven = 0;
	f0_n{
		cin>>a[i];
		sum += a[i];
	}

	if(sum%3 == 0) {
		cout<<0<<endl;
		return;
	}
	else if(sum%3 == 1) {
		cout<<1<<endl;
		return;
	}

	for(int i=0;i<n;i++) {
		ll temp = sum - a[i];
		if(temp %3 == 0){
			cout<<1<<endl;
			return;
		}
	}

	cout<<2<<endl;

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

