 
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define OJ freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define cool ios_base::sync_with_stdio(false);  cin.tie(NULL); cout.tie(NULL);
int mod = 1e9 + 7;
#define all(x) x.begin(), x.end()
#define fo(a, b, c) for(int(a) = (b); (a) < (c); (a)++)
#define rev(a, b, c) for(int(a) = b; a >= c; a--)
#define fi first
#define se second
#define pb push_back
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
constexpr int INF = 1e9;
constexpr ll lINF = 1e18;
 
 
void solve(){
	int t=1;
	//cin>>t;
	while(t--){
		ll n,x,y=0;
		vector<int> s;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>x;
			if(x%2!=0){
				y++;
			}
		}
 
		cout<<min(y,n-y)<<endl;
	}
}	
 
int main() {
    cool;
    solve();
}