#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,Q;
    string S;
	cin>>N;
    cin>>S;
    cin>>Q;
    ll t,a,b;
    char c;
    map<char,set<ll>> s_mp;
    rep(i,26){
        char a = (char)(int('a')+i);
        s_mp[a] = {};
    }

    rep(i,N){
        s_mp[S[i]].insert(i);
    }
    ll ans = 0;
    
    rep(i,Q){
        cin>>t;
        if(t==1){
            cin>>a>>c;
            s_mp[S[a-1]].erase(a-1);
            S[a-1] = c;
            s_mp[S[a-1]].insert(a-1);
        }else{
            cin>>a>>b;
            ans = 0;
            rep(i,26){
                char c = (char)(int('a')+i);

                // 一回のみ実行する方法
                auto x = s_mp[c].lower_bound(a-1);
                if(x != s_mp[c].end()){
                    if(*x<= b-1){
                        ++ans;
                    }    
                }
                // 二回実行する方法
                // auto x = s_mp[c].lower_bound(a-1);
                // auto y = s_mp[c].upper_bound(b-1);
                // if(x!= y){
                //     ++ans;
                // }
            }
            cout<<ans<<"\n";
        }

    }
	

	return 0;
}