#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,M;
	// 出入力
	cin >> N >> M;

    ll A[N];
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    if(2*M < N*N){
        priority_queue<ll> que;
        for(int i =0;i<N;i++){
            for(int j=0;j<N;j++){
                que.push(A[i]+A[j]);
            }
        }
        ll ans=0;
        for(int i=0;i<M;i++){
            ans += que.top();
            que.pop();
        }
        cout << ans << "\n";
        return 0;
    }
    else{
        priority_queue<ll,vector<ll>,greater<ll>> que;
        for(int i =0;i<N;i++){
            for(int j=0;j<N;j++){
                que.push(A[i]+A[j]);
            }
        }
        ll ans=0;
        for(int i=0;i<N;i++){
            ans += 2*N*A[i];
        }
        for(int i=0;i<N*N-M;i++){
            ans -= que.top();
            que.pop();
        }
        cout << ans << "\n";
        return 0;

    }
    

}