#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin >> N;
    typedef pair<ll,ll> pair;
    pair pair_ab[N-1];
    pair pair_a_ind[N-1];
    ll a;
    ll b;
    ll ind[N-1];
    pair ab;

    for(int i=0;i<N-1;i++){
        cin >> a >> b;
        pair_ab[i] = pair(a,b);
        pair_a_ind[i] = pair(a,i);
    }
    sort(pair_a_ind,pair_a_ind+N-1,
    [](pair x,pair y){return x.first<y.first;});

    sort(pair_ab,pair_ab+N-1,
    [](pair x,pair y){return x.first<y.first;});

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


    ll old_a = 0;
    ll tmp_ind = 0;
    ll K = 0;
    ll ans[N-1];
    for(int i=0;i<N-1;i++){
        a = pair_ab[i].first;
        b = pair_ab[i].second;
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
        cout << ans[pair_a_ind[i].second] << "\n";
    }
	return 0;
}
