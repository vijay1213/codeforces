#include<bits/stdc++.h>

using namespace std;

void solve() {

        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr, arr +n);

        int maxi = arr[0];

        for(int i = 0; i < n-1; i++) {

            maxi = max(maxi, arr[i+1] - arr[i]);
        }

        cout << maxi << endl;
        
    
}

int main() {
     int t;
     cin >> t;

     while (t--) {
         solve();
     }

     return 0;
}