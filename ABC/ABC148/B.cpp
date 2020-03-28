#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin >> N;
    string s,t;
    
    cin >> s >> t;
    string ans;
    for(int i=0;i<N;i++){
        ans = ans + s[i] + t[i];
    }

    cout << ans <<"\n";

    return 0;
}