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
	if(n==1) cout<<1<<endl;

	else{
		std::vector<string> v = {"169", "196", "961"};

		while(v.size()<n){
			for(int i = 0;i<v.size();i++)
				v[i] +="00";

			int x = v.size();
			string num1 = "1";
			string num2 = "9";

			for (int i = 0; i < (x-1)/2; ++i)
			{
				num1 += "0";
				num2 += "0";
			}
            num1 += "6";
            num2 += "6";

            for (int i = 0; i < (x-1)/2; ++i)
			{
				num1 += "0";
				num2 += "0";
			}

			num1 += "9";
			num2 += "1";

			v.pb(num1);
			v.push_back(num2);
		}
		for(auto it : v) cout<<it<<endl;
	}

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

