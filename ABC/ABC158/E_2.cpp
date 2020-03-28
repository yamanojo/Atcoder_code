#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll ctoll(char a){
    return (ll)a-'0';
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,P;
	cin>>N>>P;
    string S;
    cin>>S;

    ll ans= 0;
    ll n;

    if(P==2){
        rep(i,N){
            n = ctoll(S[i]);
            if(n%2==0){
                ans += (i+1);
            }
        }
    }else if(P==5){
        rep(i,N){
            n = ctoll(S[i]);
            if(n%5==0){
                ans += (i+1);
            }
        }
    }else{
        //10の倍数ではない
        ll m[N+1]={};
        ll num_ls[P] = {};
        ll po = 1;
        rep(i,N){
            n = ctoll(S[N-1-i]);
            m[N-1-i]=(m[N-i]+n*po)%P;
            po = (po*10)%P;
            // cout<<m[N-1-i]<<"\n";
            ++num_ls[m[N-1-i]];
        }
        n = num_ls[0];
        ans += n;
        ans += n*(n-1)/2;
        rep(i,P-1){
            n = num_ls[i+1];
            ans += n*(n-1)/2;
        }
    }

   

    cout<<ans<<"\n";
	return 0;
}