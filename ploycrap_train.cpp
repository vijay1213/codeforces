#include<bits/stdc++.h>
 
using namespace std;
 
#define pb push_back
#define endl "\n"
#define ll long long
#define vec vector<pair<int,int> >
 
void fastIO(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
void manav(){
	ll n,a[200005],ans=0,k=1;
	cin >> n;
	
	for(ll i=0;i<n;i++){
		cin >> a[i];
	}
	sort(a,a+n);
	for(ll i=0;i<n;i++){
		if(a[i]>=k){
			k++;
			ans++;
		}
	}	
	cout << ans << "\n";
}
 
 
int main(){	
	fastIO();
	int t;
	t=1;
	// cin >> t;
	while(t--){
		manav();
	}
	return 0;
} 