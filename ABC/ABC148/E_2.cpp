#include <bits/stdc++.h>
using namespace std;


int main(){
    // 非常に大きい数なので，文字として読み込む
    string s;
    cin >> s;
    int s_l = s.length();
    int N[s_l];
    for(int i=0;i<s_l;i++){
        N[i] =s[i]-'0';
    }
    // for (int i = 0; i < s.length(); i++){
    //     cout << N[i];
    // }
    // cout << "\n";
    int ans_l = s_l-1;
    int ans[ans_l];
    for (int i = 0; i < ans_l; i++ ) {
        ans[i] = 0;
    }

    for(int i=0;i<ans_l;i++){
        for(int j=0;j<ans_l-i;j++){
            ans[ans_l-1-i] += N[j];
        }
    }
    for (int i = 0; i < s_l-1; i++){
        cout << ans[i];
    }
    cout << "\n";
    
    string ans_s;
    int tmp_10 =0;
    for(int i=0;i<ans_l;i++){
        ans[ans_l-1-i] += tmp_10;
        tmp_10 = ans[ans_l-1-i]/10;
        ans_s.insert(0,to_string(ans[ans_l-1-i]%10));
    }
    while(tmp_10!=0){
        ans_s.insert(0,to_string(tmp_10%10));
        tmp_10 = tmp_10/10;
    }
    cout << ans_s << "\n";

    return 0;
}