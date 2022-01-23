#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll a,b,c;
    cin>>a>>b>>c;

    ll n=2*abs(a-b);

    if(a>n || b>n || c>n){

      cout<<-1<<endl;

      return;

    }else{

      if(c+n/2<=n)
        cout<<c+n/2<<endl;

      else
       cout<<c-n/2<<endl;
      return;
      
    }
	
}
 
int main(){
	ll t;
	cin>>t;
	while(t--){
		solve();		
	}
	return 0;
}