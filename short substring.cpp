
#include<bits/stdc++.h>
 
using namespace std;
 
void solve() {
    string s;
    cin>>s;
    int n=s.size();
    cout<<s[0];
    for(int i=1;i<n-1;i+=2){
      cout<<s[i];
    }
   cout<<s[n-1];
    cout<<"\n";
}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        // cout << "Case #" << t << ": ";
        solve();
    }
}
