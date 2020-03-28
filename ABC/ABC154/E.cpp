#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll ctoll(char a){
    return (ll)a-'0';
}

ll calcC(ll a,ll b){
    ll r = 1;
    if(a< b){
        return 0;
    }
    rep(i,b){
        r*=(a-i);
    }
    rep(i,b){
        r/=(i+1);
    }
    return r;
}


int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	string S;
	cin>>S;
    ll K;
    cin>>K;
	ll l = S.length();
    if(l<K){
        cout<<0<<"\n";
        return 0;
    }
    ll pow9[4] = {1,9,9*9,9*9*9};
    ll ans = 0;
    
    if(l>K){
        ans += calcC(l-1,K)*pow9[K];
    }
    ll max_n = ctoll(S[0]);
    if(K==1){
        ans += max_n;
    }else{
        ll second_n = ctoll(S[1]);
        if(K==2){
            ans += max(0ll,max_n-1)*(l-1)*9+second_n+(l-2)*9;
        }else{
            ll third_n = ctoll(S[2]);
            ans +=(max_n-1)*calcC(l-1,2)*pow9[2];
            if(second_n>0){
                ans += calcC(l-2,2)*pow9[2];
                ans += max(0ll,second_n-1)*(l-2)*9;
                ans += third_n + (l-3)*9;
            }else{
                ll ind = 1;
                while(S[ind]=='0'){
                    ++ind;
                }
            }
            
        }
    }
    cout<<ans<<"\n";
    cout<<l<<"\n";

	
	return 0;
}