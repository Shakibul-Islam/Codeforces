#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
const int N = 1e5+10;
const int M = 1e9+7;


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n; cin>>n;
	std::vector<int> v(n), prefix(n), suffix(n);

	for(auto &i: v) cin>>i;

	set<int>preMex, sufMex;
	int a = 0,b=0;

	f0_n{
		preMex.insert(v[i]);
		while(preMex.count(a)) a++;
		prefix[i] = a;
	}

	fn_0{
		sufMex.insert(v[i]);
		while(sufMex.count(b)) b++;
		suffix[i] = b;
	}

	vector<pair<int,int>>answer;
	for(int i = 0;i+1<n;i++){
		if(prefix[i] == suffix[i+1]){
			answer.push_back({1,i+1});
			answer.push_back({i+2,n});
			break;
		}
	}

	if(!answer.size()) cout<<-1<<endl;
	else{
		cout<<2<<endl;
		for(auto &i: answer) cout<<i.first<<" "<<i.second<<endl;
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

