#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    std::string s1 = std::to_string(n);
    for(int i =0;i<k;i++)
    {
        if(s1[s1.size()-1]=='0')
            s1.erase((s1.size()-1),1);
        else{
            int myint = stoi(s1);
            myint = myint-1;
            s1 = std::to_string(myint);
        }
    }
    int myint = stoi(s1);
     std::printf("%d\n",myint);

}
