#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);

	ll N,M,V,P;
    cin >> N >> M >> V >> P;
    ll A[N];
    for(int i=0;i < N;i++){
        cin >> A[i];
    }
    sort(A,A+N,greater<ll>());
    ll up_n;
    up_n = V-(P-1);
    if(up_n <1){
        up_n = 1;
    }
    ll border;
    border = A[P-1];
    ll ans=P-1;
    ll tmp;
    ll tmp2;
    ll up_sum;
    ll dif_sum = 0;
    ll a;
    ll ind = P-1;
    ll over_sum= A[P-1];
    for(int i=P;i<N;i++){
        if(A[i]+M < border){
            break;
        }
        if(N-i < up_n){
            tmp = up_n - (N-i);

            up_sum = tmp*M;
            if ((over_sum + up_sum) > (A[i]+M)*(i-(P-1)) ){
                break;
            }
        }
        over_sum += A[i];
        ans = i;
    }
    ans += 1;
    cout << ans << "\n";
}