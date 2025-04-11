    #include<bits/stdc++.h>
    using namespace std;
    // #define int long long
    #define fr for(int i = 0;i<n;i++)
    #define frn_1 for(int i = 0;i<n-1;i++)
    #define fr1n  for(int i=1;i<n;i++)
    // #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


    //int32_t main()
    int main ()
    {
        int t=0;
        cin >> t;

        while(t--)
        {
        	string s;
        	cin>>s;
        	stack<int>small,capital;
        	for(int i = 0;i<s.size();i++){
        		if(isupper(s[i]) && s[i] != 'B') capital.push(i);
        		if(islower(s[i]) && s[i] != 'b') small.push(i);
        		if (s[i] == 'B' && !capital.empty())
        		{
        			s[capital.top()] = '9';
        			capital.pop();
        		}
        		if(s[i] == 'b' && !small.empty()){
        			s[small.top()] = '9';
        			small.pop();
        		}
        	}
        	int n = s.size();
        	for(int i=0;i<n;i++){
        		if(s[i] != 'B' & s[i] != 'b' & s[i] != '9'){
        			cout<<s[i];
        		}
        	}
        	cout<<endl;


        }
    }
