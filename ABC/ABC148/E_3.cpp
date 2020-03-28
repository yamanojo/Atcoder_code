#include <bits/stdc++.h>
using namespace std;

int main(){
    long N;
    cin >> N;
    
    if(N%2 == 1){
        cout << 0 << "\n";
        return 0;
    }
    long ans = 0;
    N= N/2;
    while(N>=5){
        ans += N/5;
        N = N/5;
    }
    cout << ans << "\n";
    return 0;
}