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
		string s;
		cin>>s;
		int a = count(s.begin(),s.end(),'1');
		v[i] = a;

	}
	int ok = 0;
	for(int i = 0;i<n-1;i++){
		if(v[i] == 0) continue;
		else if(v[i] == v[i+1]){
			ok = 1;
			break;
		}
		else ok = 0;
	}
	if(ok) cout<<"SQUARE"<<endl;
	else cout<<"TRIANGLE"<<endl;



}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

