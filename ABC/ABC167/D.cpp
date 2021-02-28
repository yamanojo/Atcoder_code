#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,K;
	cin>>N>>K;
	vector<ll> A(N);
	ll a;
	rep(i,N){
		cin>>a;
		--a;
		A[i] = a;
	}
	vector<ll> d(N);
	rep(i,N){
		d[i]= -1;
	}
	d[0] = 0;
	ll p = 0;
	ll next_p;
	ll itr = 0;
	ll c;
	ll flag = true;
	if(A[0]==0){
		goto fin;
	}

	while(K>itr){
		next_p = A[p];
		// cout<<next_p<<"\n";
		++itr;
		if(d[next_p]==-1 || flag == false){
			p = next_p;
			d[next_p] = itr;
		}else{
			// cout<<next_p<<"\n";
			flag = false;
			c = itr-d[next_p];
			K = (K-itr)%c + itr;
			if(K==0){
				break;
			}
			p = next_p;
		}
	}
	fin:
	cout<<p+1<<"\n";
	return 0;
}
