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



}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		//solve();
		//cout<<endl;
		int n,q;  cin>>n>>q;
	std::vector<ll> a(n);
	vector<ll> pre(n), one(n);

	f0_n{
		cin>>a[i];
		pre[i] = a[i];
		one [i] = (a[i] == 1);
	}

	for(int i = 1; i<n;i++){
		pre[i] += pre[i-1];
		one[i] += one[i-1];
	}

	while(q--){
		ll l,r;
		cin>>l>>r;
		l--,r--;
		//cout<<l<<" "<<r<<endl;

		if(l == r){
			no;
			continue;
		}
		ll sum = pre[r];
		ll cnt = one[r];

		if(l>0){
			sum -= pre[l-1];
			cnt -= one[l-1];
		}
		sum -= 2*cnt;
		ll rem = r - l +1-cnt;

		if(sum >= rem) yes;
		else no;

	}

	}
}

