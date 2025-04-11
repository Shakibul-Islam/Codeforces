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

bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}

const int N = 1e5+10;
const int M = 1e9+7;


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n,l; cin>>n>>l;

	std::vector<pair<int,int>> v(n);
	f0_n{
		int a,b;  cin>>a>>b;
		v[i].first = a;
		v[i].second = b;
	}
	sort(v.begin(),v.end(),sorta);
	int ans = 0;
	f0_n{
		priority_queue<int> pq;
		int sum = 0;
		for(int j = i; j<n;j++){
			pq.push(v[j].first);
			sum+=v[j].first;
			while(!pq.empty() && sum + v[j].second - v[i].second>l){
				sum -= pq.top();
				pq.pop();
			}
			ans = max(ans,(int)pq.size());
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

