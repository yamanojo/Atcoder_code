#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll calc(ll a,ll f,ll b){
    ll d = a*f-b;
    return max(0ll,(d+f-1)/f);
}


int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	// 出入力
	cin>>N>>K;
    ll A[N];
    ll a_sum=0;
    ll F[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
        a_sum+=A[i];
    }
    // cout << a_sum<<"\n";
    if(a_sum<=K){
        cout<<0<<"\n";
        return 0;
    }
	for(int i=0;i<N;i++){
        cin>>F[i];
    }
    sort(A,A+N);
    sort(F,F+N,greater<ll>());
    vector<pair<ll,ll>> af;
    ll min_ans = 0;
    ll max_ans = A[N-1]*F[0];
    ll border;
    ll tmp_ans;
    ll tmp_n;
    ll iter = 0;
    ll n_each[N];
    ll ans_n_each[N];
    ll s=0;


    while(min_ans+1 != max_ans){
        iter +=1;
        tmp_ans = (max_ans + min_ans)/2;
        tmp_n = 0;
        for(int i=0;i<N;i++){
            n_each[i]=calc(A[i],F[i],tmp_ans);
            tmp_n+=n_each[i];
        }
        if(tmp_n <= K){//可能な場合
            max_ans= tmp_ans;
            memcpy(ans_n_each, n_each, sizeof(n_each));
        }else{//不可能な場合
            min_ans = tmp_ans;
        }
        // cout<<min_ans<<" "<<max_ans<<"\n";
    }
    // for(int i=0;i<N;i++){
    //     cout<<A[i]<<ans_n_each[i]<<F[i]<<"\n";
    // }
    ll ans = max_ans;
    cout<< ans << "\n";
    // cout<< iter<< "\n";
	return 0;
}