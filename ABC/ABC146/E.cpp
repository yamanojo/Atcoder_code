#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,K;
	// 出入力
	cin>>N>>K;
    vector<ll> S(N);
    ll a;
    cin>>a;
    S[0]= a%K;
    for(int i=0;i<N;i++){
        cin>>a;
        S[i]=(S[i-1]+a)%K;
    }
    ll ans=0;
    map<int,int> sum2cnt;
    sum2cnt[0]= 1;

    for(int i=1;i<N;i++){
        if(i>=K){
            --sum2cnt[S[i-K]];
        }

        if(sum2cnt.count(S[i])){
            ans += sum2cnt[S[i]];
        }

        if(!sum2cnt.count(S[i])){
            sum2cnt[S[i]] = 0;
        }
        ++sum2cnt[S[i]];

	cout<<ans<<"\n";
	return 0;
}