#include<bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {
        int a,b,c;
        cin >> a >> b >> c;
        int count = 0;
        count = abs(a - b) + abs(a-c) + abs(b-c);

        if(count <= 4) {
            cout << 0 << endl;
        } else {
            cout << count - 4 << endl;
        }
    }
    return 0;
}