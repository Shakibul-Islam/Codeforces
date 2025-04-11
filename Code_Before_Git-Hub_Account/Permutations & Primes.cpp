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
	std::vector<int> v(n,-1);
	if(n==1){
		cout<<1;
		return;
	}
	else if(n == 2){
		 cout<<"2 1";
		 return;
	}
	else{

		v[n/2] = 1;
		v[n-1] = 2;
		v[0] = 3;

		int cnt = 4;
		for(int i = 1; i<= n-1;i++){
			if(v[i] != -1) continue;
			v[i] = cnt++;
		}
	}
	f0_n cout<<v[i]<<" ";


}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		cout<<endl;
	}
}

