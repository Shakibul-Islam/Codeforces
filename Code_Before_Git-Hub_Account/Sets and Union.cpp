#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        set<int>st;

        for (int i = 0; i < n; ++i)
        {
            int k;
            cin >> k;
            for (int j = 0; j < k; ++j)
            {
                int x;
                cin >> x;
                st.insert(x);
            }
        }
        cout<<st.size()<<" r"<<endl;


    }

    return 0;
}
