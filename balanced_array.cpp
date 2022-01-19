#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t ;
    cin >> t ;
    while(t--){
        int n ;
        cin >> n ;
        if(n % 4 == 0){
            cout << "YES \n" ;
            int even = 2 , odd = 1 , evensum = 0 , oddsum = 0 ;
            for(int i = 0 ; i < n / 2 ; i++){
                cout << even << " " ;
                evensum += even ;
                even += 2 ;
            }
            for(int i = 0 ; i < n / 2 - 1 ;i++){
                cout << odd << " " ;
                oddsum += odd ;
                odd += 2 ;
            }
            cout << evensum - oddsum << "\n" ;
        }
        else{
            cout << "NO \n" ;
        }
    }
    return 0;
}