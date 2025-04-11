#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define all(vsa)	vsa.begin(),vsa.end()
#define f0_n for(int i=0;i<n;i++)

#define f0_n1 for(int iiii = 0;iiii<nnnn-1;iiii++)
#define f1_n  for(int ii=1;ii<nn;ii++)

#define pb(a) push_back(a)
#define arraylength(v) 	end(v)-begin(v)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


//int32_t main()



void solve(){
	int n,k,q;	cin>>n>>k>>q;
	std::vector<ll> a(n);
	f0_n{
		cin>>a[i];
	}
	ll ans = 0;

	ll constant = 0;
	f0_n{
		if(a[i]<=q){
			constant++;
			if(i == n-1 or a[i+1]>q){
				if(constant>=k){
					ll x= constant - k +1LL;
					ll add = (x*(x+1LL))/2LL;
					ans += add;
				}
				constant = 0;
			}
		}
	}
	cout<<ans<<endl;


}
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

