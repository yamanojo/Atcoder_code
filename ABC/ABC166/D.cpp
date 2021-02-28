#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

    ll X;
    cin>>X;
    ll N = 1e9;
    unordered_map<ll,ll> mp;
    ll n= 1;
    ll s;
    ll ans1,ans2;
    while(true){
        s = n*n*n*n*n;
        if(s == X){
            ans1 = n;
            ans2 = 0;
            goto fin;
        }
        auto itr = mp.find(s);
        if(itr !=mp.end()){
            if(s<=X){
                ans1 = itr->second;
            }else{
                ans1 = -itr->second;
            }
            ans2 = -n;
            goto fin;
        }
        mp[X+s] = n;
        mp[X-s] = n;
        ++n;
    }

    fin:
    cout<<ans1<<" "<<ans2<<"\n";
    
	
	return 0;
}