#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,d;
    cin>>n;
    double vf, sum =0;
    for (int i =1; i<=n; i++){
        cin>>d;
        sum +=d;
    }
    vf = sum/n;
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    std::cout << vf;
}
