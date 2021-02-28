#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M,X;
	cin>>N>>M>>X;
	vector<ll> C(N);
	ll A[N][M];
	rep(i,N){
		cin>>C[i];
		rep(j,M){
			cin>>A[i][j];
		}
	}
	// cout<<A[0][M-1];
	ll ans = -1;
	ll n = 1;
	rep(i,N){
		n *= 2;
	}
	
	ll tmp_ans;
	rep(i,n){
		tmp_ans = 0;
		vector<ll> v(M);
		// rep(j,M){
		// 	v[i]=0;
		// }
		ll b = i;
		rep(j,N){
			if(b%2==1){
				rep(k,M){
					v[k] += A[j][k];
				}
				tmp_ans += C[j];
			}
			b/=2;
		}
		// rep(j,M){
		// 	cout<<v[j]<<" ";
		// }
		// cout<<"\n";
		bool flag = true;
		rep(j,M){
			if(v[j]< X){
				flag = false;
			}
		}
		// cout<<flag;
		if(flag == true){
			// cout<<tmp_ans<<"\n";
			// rep(j,M){
			// 	cout<<v[i]<<" ";
			// }
			if(ans != -1){
				ans = min(ans,tmp_ans);
			}else{
				ans = tmp_ans;
			}
		}
	}

	cout<<ans<<"\n";
	// cout<<X;

	
	return 0;
}
