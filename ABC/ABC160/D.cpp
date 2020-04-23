#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,X,Y;
	cin>>N>>X>>Y;
    vector<ll> ans(N);
    vector<ll> ans_ab(N);
    ll a,b,c;
    a = X-1;
    b = N-Y;
    c = Y-X+1;
    ll max_c = c/2;
    if(c%2==0){
        ans[max_c]+=max_c;
    }else{
        ans[max_c]+=c;
    }
    rep(i,max_c-1){
        ans[i+1]+=c;
    }
    
    rep(i,a){
        ans_ab[i+1]+=a-i;
        rep(j,max_c-1){
            ans_ab[i+1+j+1] += 2;
        }
        if(c%2==0){
            ans_ab[i+1+max_c] += 1;
        }else{
            ans_ab[i+1+max_c] += 2;
        }
    }


    rep(i,b){
        ans_ab[i+1]+=b-i;
        rep(j,max_c-1){
            ans_ab[i+1+j+1] += 2;
        }
        if(c%2==0){
            ans_ab[i+1+max_c] += 1;
        }else{
            ans_ab[i+1+max_c] += 2;
        }
    }

    rep(i,a){
        rep(j,b){
            ans_ab[i+1+1+j+1]+=1;
        }
    }

    rep(i,N-1){
        cout<<(ans[i+1]+ans_ab[i+1])<<"\n";
    }


	return 0;
}