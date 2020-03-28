#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int s = a+b+c;
    string ans;
    if(s>=22){
        ans = "bust";
    }else{
        ans = "win";
    }
    cout << ans << "\n";

    return 0;
}