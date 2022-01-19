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
        int arr[n] , x = 0 , y = 0 ;
        for(int i = 0 ; i < n ;i++){
            cin >> arr[i] ;
            if(arr[i] % 2 == 1 && i % 2 == 0){
                x++ ;
            }
            if(arr[i] % 2 == 0 && i % 2 == 1){
                y++ ;
            }
        }
        if(x != y ){
            cout << "-1 \n";
        }
        else{
            cout << x << "\n" ;
        }
    }
    return 0 ;
}