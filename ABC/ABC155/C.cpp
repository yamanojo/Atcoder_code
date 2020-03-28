#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
	map<string,ll> mp;
    string s;
    ll max_n = 0;
    rep(i,N){
        cin>>s;
        ++mp[s];
        max_n = max(max_n,mp[s]);
    }

    for(auto itr = mp.begin();itr != mp.end();++itr){
        if(itr->second==max_n){
            cout<<itr->first<<"\n";
        }
    }

	return 0;
}