#include <bits/stdc++.h>
using namespace std;

int main(){
    // 非常に大きい数なので，文字として読み込む
    string s;
    cin >> s;
    // 1の位
    cout << s << "\n";
    int min_n;
    min_n = stoi(s[1:2]);
    cout << min_n << "\n";
    if(min_n%2==1){
        cout << 0 << "\n";
        return 0;
    }
    if(s.length()<2){
        cout << 0 << "\n";
        return 0;
    }

    string ans;
    int s_sum[s.length()-1];
    for(int i=0;i<s.length()-1;i++){
        for(int j=0;j<s.length()-1-i;j++){
            // s_sum[i]+=s[j]-"0";
            cout << s << "\n";     
        }
        // cout << s_sum[i] << "\n";
    }
    int up_n=0;
    int tmp =0;
    for(int i=0;i<s.length()-1;i++){
        tmp = s_sum[i]+up_n;
        ans.insert(0,to_string(tmp%10));
        up_n = tmp/10;
    }
    
    while(up_n != 0){
        ans.insert(0,to_string(up_n%10));
        up_n = up_n/10;
    }

    cout << ans << "\n";

    return 0;
}