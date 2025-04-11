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
	f0_n 	cin>>v[i];

	int ok = 0, ok1 = 1, ok0 = 0;

	int ans = 0;

	f0_n{
		if(v[i] == 0 && ok == 0) continue;

		else if(v[i] == 1) {
			ok = 1;
			continue;
		}

		else if(v[i] == 0 && ok1 ==1){
			for(int j = i+1; j<n;j++){
				if(v[j] == 1) {
					ok1 = 0;
					break;

				}
			}

			if(ok1 == 0){
				ans++;
				ok1 = 1;
			}
		}

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

