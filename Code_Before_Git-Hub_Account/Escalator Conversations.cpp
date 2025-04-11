#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define fi_n(i,m,n) for (int i=m; i <=n; i++)

#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}

const int N = 1e5+10;
const int M = 1e9+7;

char arr[3][N];


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n,m,k,H; cin >> n >> m >> k >> H;
    int ans = 0;

    fi_n(i, 0,n-1) {
        int x; cin >> x;
        ans += (H != x) && abs(H - x) % k == 0 && abs(H-x) <= (m-1) * k;
    }
    cout << ans << endl;


}


//int32_t main()
int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

