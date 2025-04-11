#include<bits/stdc++.h>
using namespace std;

bool canSortArray(vector<int>& a)
{
    int n = a.size();
    vector<int> b(n - 1);

    // Calculate the difference array b
    for (int i = 0; i < n - 1; i++)
    {
        b[i] = a[i + 1] - a[i];
    }

    // Check if there is any negative element in b for non-power of 2 positions
    for (int i = 0; i < n - 1; i++)
    {
        if (b[i] < 0)
        {
            if ((i & (i + 1)) == 0)
            {
                // i is a power of 2
                continue;
            }
            else
            {
                return false;  // There's a negative element at a non-power of 2 position
            }
        }
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (canSortArray(a))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
