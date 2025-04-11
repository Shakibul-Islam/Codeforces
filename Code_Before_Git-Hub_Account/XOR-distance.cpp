#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, x;
        cin >> a >> b >> x;

        if(a < b) {
            long long t = a;
            a = b;
            b = t;
        }

        long long ans = 0, flag = 0;
        for (long long bit = 62; bit >= 0; bit--) {
            if(((a>>bit)&1)&&!((b>>bit)&1)){
				if(!flag)flag=1;
				else if((ans|1ll<<bit)<=x)ans|=1ll<<bit;
			}
        }


        cout << ((a^ans) - (b^ans)) << "\n";
    }

    return 0;
}
