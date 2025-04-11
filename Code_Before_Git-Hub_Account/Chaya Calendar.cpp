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
	f0_n cin>>v[i];
	int y = v[0];
	for(int j = 1; j<n;j++){
		if(v[j]>y)   y = v[j];
		else{
			int k = 1;
			int t = v[j];
			while(v[j]<=y){
				v[j] = t*k;
				k++;
			}
			y = v[j];
		}
	}
	cout<<y<<endl;

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

