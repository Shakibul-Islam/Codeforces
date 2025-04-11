
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vsa)	vsa.begin(),vsa.end()
#define f0_n for(int iii=0;iii<nnn;i++)

#define f0_n1 for(int iiii = 0;iiii<nnnn-1;i++)
#define f1_n  for(int ii=1;ii<nn;i++)

#define pb(a) push_back(a)
#define arraylength(v) 	end(v)-begin(v)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

int main(){
	int t;		cin>>t;
	while(t--){

	  string s;		cin>>s;
	  int n = s.size();

	  if(count(s.begin(),s.end(),s[0]) == n){
	  	cout<<-1<<endl;
	  	continue;
	  }

	  bool isPalindrome = true;
	  int l = 0,r=n-1;
	  while(l<r){
	  	if(s[l] != s[r]){
	  		isPalindrome = false;
	  		break;
	  	}
	  	l++;
	  	r--;
	  }
	  if(!isPalindrome){
	  	cout<<n<<endl;
	  }
	  else{
	  	cout<<n-1<<endl;
	  }

	}
}

