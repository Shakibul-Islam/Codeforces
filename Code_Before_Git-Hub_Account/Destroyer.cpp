#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define in(v)  cin>>v[i]

#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define fi_n(m,n) for(int i = m; i <= n; i++)
#define fn_i(n,i,m) for(int i = n; i >= m;i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define el  cout<<"\n";  // el = endl;

#define ifelse(big,small)   (big>small)?cout<<r:cout<<0; cout<<endl;

bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}

const int N = 1e5+10;
const int M = 1e9+7;

int arr[N];

char arr2[3][N];


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n;		cin>>n;
	std::vector<int> v(n);
	f0_n in(v);

	std::map<int, int> mp;

	f0_n mp[v[i]]++;

	fi_n(1,100){
		if(mp[i]>mp[i-1]){
			no;
			return;
		}
	}
	yes;


}


//int32_t main()
int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

