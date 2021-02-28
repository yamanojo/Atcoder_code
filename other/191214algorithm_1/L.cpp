#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,M;
	cin>>N>>M;
	vector<ll> x(N),y(N),c(N),X(M),Y(M),C(M);
	rep(i,N){
		cin>>x[i]>>y[i]>>c[i];
	}
	rep(i,M){
		cin>>X[i]>>Y[i]>>C[i];
	}

	double c_n[N][N];
	double c_nm[N][M];
	double c_nm[M][M];
	rep(i,N){
		rep(j,N){
			c_n[i][j] = hypot(x[i]-x[j],y[i]-y[j]);
			if(c[i] != c[j]){
				c_n[i][j]*=10;
			}
		}

	}
	double tmp_ans;
	double ans = 1500*30;
	ll m_n = 1;
	ll mask = 0;
	rep(i,M){
		mask += m_n;
		m_n*=2;
	}
	ll n;
	rep(i,m_n){
		vector<ll> q;
		n = N + mask * m_n;
		
	}
	

	
	return 0;
}