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
	std::vector<int> a(n), b(n);
	f0_n	cin>>a[i];
	f0_n	cin>>b[i];

	std::map<int, int> conA, conB;

	int con = 0;
	f0_n{
		con++;
		if(i == n-1 or a[i+1] != a[i]){
			if(conA.find(a[i]) == conA.end()){
				conA[a[i]] = con;
			}
			else{
				conA[a[i]] = max(conA[a[i]], con);
			}
			con = 0;
		}

	}
	con = 0;
	f0_n{
		con++;
		if(i == n-1 or b[i+1] != b[i]){
			if(conB.find(b[i]) == conB.end()){
				conB[b[i]] = con;
			}
			else{
				conB[b[i]] = max(conB[b[i]], con);
			}
			con = 0;
		}
	}

	int ans = 0;
	for(auto [v,val]:conA){
		ans = max(ans, (conA[v] + conB[v]));
	}
	for(auto [v,val]:conB){
		ans = max(ans, (conA[v]+conB[v]));
	}
	cout<<ans<<endl;

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}


