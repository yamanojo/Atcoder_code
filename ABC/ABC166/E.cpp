#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    
    ll N;
    cin>>N;
    vector<ll> A(N);
    unordered_map<ll,ll> mp1;
    unordered_map<ll,ll> mp2;
    rep(i,N){
        cin>>A[i];
        ++mp1[(i+1)-A[i]];
        ++mp2[(i+1)+A[i]];
    }
    ll ans = 0;
    ll n1,n2;
    ll a;
    for(auto itr = mp1.begin(); itr != mp1.end();++itr){
        a = itr->first;
        n1 = itr->second;
        auto itr2 = mp2.find(a);
        if(itr2 != mp2.end()){
            ans += n1*itr2->second;
        }
        
    }

    cout<<ans<<"\n";

	
	return 0;
}