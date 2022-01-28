# include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    
    int h1,m1,h2,m2,min1,min2,dif,half,h3,m3;
    char c1,c2;
    cin >> h1 >> c1 >> m1 >> h2 >>  c2 >> m2;
    
    min1 = 60 * h1 + m1;
    min2 = 60 * h2 + m2;
    dif = min2 - min1;
    half = min1 + dif/2;
    h3 = half / 60;
    m3 = half % 60;
    
    if ( h3 > 9 && m3 > 9)
        cout << h3 << ':' << m3 << endl;
    else if ( h3 > 9 && m3 <= 9)
        cout << h3 << ':' << '0' << m3 << endl;
    else if ( h3 <= 9 && m3 > 9)
        cout << '0' << h3 << ':' << m3 << endl;
    else
        cout << h3 << '0' << ':' << '0' << m3 << endl;
    return 0;

}