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
const int N = 1e5+10;
const int M = 1e9+7;


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int n; cin>>n;
	vector<int>v1,v2;
	f0_n{
		int a,b; cin>>a>>b;
		v1.pb(a);
		v2.pb(b);
	}
	sort(all(v1));
	sort(all(v2));

	bool ans = true;
	if(v1[0]<0 && v1[n-1]>0){
		if(v2[0]<0 && v2[n-1]>0) ans = false;
	}
	if(ans) yes;
	else no;



}


//int32_t main()
int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

