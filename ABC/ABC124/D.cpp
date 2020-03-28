#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,K;
    cin>>N>>K;
	string S;
	cin>>S;
    ll ans = 0;
    ll s = 0;
    ll ind_s=0,ind_f = 0;
    ll c = 0;
    while(ind_f<N){
        while(ind_f!=N){
            while(c<K&&ind_f!=N){
                while(S[ind_f]=='1'&&ind_f!=N){
                    ++ind_f;
                }
                if(ind_f!=N){
                    ++c;
                    while(S[ind_f]=='0'&&ind_f!=N){
                        ++ind_f;
                    }   
                }
                while(S[ind_f]=='1'&&ind_f!=N){
                    ++ind_f;
                }
            }
            ans = max(ans,ind_f-ind_s);
            // cout<<ind_s<<" "<<ind_f<<"\n";
            while(S[ind_s]=='1'&&ind_s!=N){
                ++ind_s;
            }
            
            if(ind_s!=N){
                --c;
                while(S[ind_s]=='0'&&ind_s!=N){
                    ++ind_s;
                }   
            }
        }
    }
    cout<<ans<<"\n";
	return 0;
}

