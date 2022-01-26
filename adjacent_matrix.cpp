#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll count = 0;
        if (n == 2)
        {
            cout << "-1" << endl;
        }
        else
        {
 
            for (int i = 1; i <= n * n; i += 2)
            {
                cout << i << " ";
                count++;
                if (count % n == 0)
                {
                    cout << endl;
                }
            }
 
            for (int i = 2; i <= n * n; i += 2)
            {
                cout << i << " ";
                count++;
                if (count % n == 0)
                {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}