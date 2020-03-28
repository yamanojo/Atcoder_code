#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K,R,S,P;
    string T;
	// 出入力
	cin >> N >> K;
    cin >> R >> S >> P;
    cin >> T;

    ll ans = 0;
    char old_c;
    char tmp_c;
    int tmp_ind=0;
    for(int i=0;i<K;i++){
        old_c = '0';
        tmp_ind = 0;
        while(i+K*tmp_ind < N){
            tmp_c = T[i+K*tmp_ind];
            tmp_ind +=1;
            if(old_c == tmp_c){
                old_c = '0';
            }else{
                if(tmp_c=='r'){
                    old_c = 'r';
                    ans +=P;
                }else if(tmp_c=='s'){
                    ans+=R;
                    old_c = 's';
                }else{
                    ans+=S;
                    old_c = 'p';
                }
            }
        }
    }

    cout << ans << "\n";


}