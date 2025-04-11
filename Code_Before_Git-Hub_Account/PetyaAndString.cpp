#include<iostream>
#include<string.h>
#include <cctype>
using namespace std;

std::string toUpperCase(const std::string& str) {
    std::string result;
    for (char ch : str) {
        result += std::toupper(ch);
    }
    return result;
}


int main ()
{
    string a,b;
    cin>>a>>b;

    std::string x = toUpperCase(a);
    std::string y = toUpperCase(b);
                                                //    lower_string(str);       //function call to convert to lowercase
	                                            //    upper_string(str);

    int n = x.compare(y);
    if (n<0){
        cout<<"-1"<<endl;
    }
    else if (n>0)
    {
        cout<<"+1"<<endl;
    }
    else if (n == 0)
    {
        cout<<"0"<<endl;
    }
    
    

}