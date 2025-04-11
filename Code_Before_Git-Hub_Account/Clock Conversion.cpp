// Md. Shakibul Islam.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
//#define int long long

#define all(v)	v.begin(),v.end()
#define in(v)  cin>>v[i]

#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define fi_end(begin,end) for(int i = begin; i <= end; i++)
#define fend_i(end,begin) for(int i = end; i >= begin;i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define el  cout<<"\n" // el = endl;

#define ifelse(big,small)   (big>small)?cout<<r:cout<<0; cout<<endl;

bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}

const int N = 1e5+10;
const int M = 1e9+7;

int arr[N];

int dx[4] = {-1,1,-1,1},   dy[4] = {-1,-1,1,1};


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
void Hash(){
	cout<<"##"<<endl;
	cout<<"##";
}
void Dot(){
	cout<<".."<<endl;
	cout<<"..";
}

void solve(){
	string s;
	cin>>s;

	string p;
	p.push_back(s[0]);
	p.push_back(s[1]);

	string l;
	l.push_back(s[3]);
	l.push_back(s[4]);

	int stoi(string s, size_t position = 0, int base = 10);

	int h = std::stoi(p);
	int m = std::stoi(l);

	std::string sh = std::to_string(h);
	std::string sm = std::to_string(m);

	int AM = 0;

	if(h==0 || h<12) {

		if(h == 0) sh ="12";
		if(h<10 && h!=0){
			sh = '0'+sh;
		}
		if(m<10){
			sm = '0'+sm;
		}
		cout<<sh<<':'<<sm<<" AM"<<endl;
	}
	else{
		//if(h==12) cout<<s<<" PM"<<endl;

		if(h>12){
			h = h-12;
			sh = std::to_string(h);
		}

		if(h<10 && h!=0){
			sh = '0'+sh;
		}
		if(m<10){
			sm = '0'+sm;
		}
		cout<<sh<<':'<<sm<<" PM"<<endl;
	}

}


//int32_t main(){
int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

