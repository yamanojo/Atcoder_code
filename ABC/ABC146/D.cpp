#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin >> N;
    ll A_ar[N-1];
    ll B_ar[N-1];
    for(int i=0;i<N-1;i++){
        cin >> A_ar[i] >> B_ar[i];
    }
    
    ll color_ar[N][N-1];
    for(int i=0;i<N;i++){
        for(int j=0;j<N-1;j++){
            color_ar[i][j] = 0;
        }
    }
    ll color_not[N];
    for(int i=0;i<N;i++){
        color_not[i]=0;
    }
    ll a = 0;
    ll b = 0;
    ll old_a = 0;
    ll tmp_ind = 0;
    ll K = 0;
    ll ans[N-1];
    for(int i=0;i<N-1;i++){
        a = A_ar[i];
        b = B_ar[i];
        if (a != old_a){
            tmp_ind = 1;
            if(tmp_ind == color_not[a-1]){
                tmp_ind++;
            }
            ans[i]= tmp_ind;
            color_not[b-1] = tmp_ind;
        }else{
            tmp_ind++;
            if(tmp_ind == color_not[a-1]){
                tmp_ind++;
            }
            ans[i]= tmp_ind;
            color_not[b-1] = tmp_ind;
        }
        old_a = a;
        K = max(K,tmp_ind);           
    }
    
    cout << K << "\n";
    for(int i=0;i<N-1;i++){
        cout << ans[i] << "\n";
    }
	return 0;
}
