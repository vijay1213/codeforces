#include<bits/stdc++.h>

using namespace std;

#include <iostream>
using namespace std;
#include <bits/stdc++.h>
 
int main(){
    int t;
    string alphabet,ch;
    vector<int> V;
    cin >> t;
    for (int i=0;i<t;i++){
        cin >> alphabet;
        cin >> ch;
        int sum=0;
        for (int j=0;j<ch.length();j++){
            int position = alphabet.find(ch[j]) + 1 ;
            V.push_back(position);
        }
        for (int i = 0, j = 1; i<V.size()-1,j<V.size(); i++,j++)
            sum+=abs(V[j]-V[i]);
        cout << sum << endl;
        V.clear();
        V.shrink_to_fit();
    }
}
 