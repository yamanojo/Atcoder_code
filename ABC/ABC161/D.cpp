#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll K;
	cin>>K;
    if(K<=9){
        cout<<K<<"\n";
        return 0;
    }
    
    ll n = 0;
    deque<ll> q;
    rep(i,9){
        q.push_back(i+1);
    }
    n+=9;
    ll a;
    ll b;
    while(n<K){
        a = q.front();q.pop_front();
        b = a%10;
        if(b-1>=0){
            ++n;
            q.push_back(a*10+b-1);
        }
        ++n;
        q.push_back(a*10+b);
        if(b+1<=9){
            ++n;
            q.push_back(a*10+b+1);
        }
    }
    ll ans;
    if(n==K){
        ans = q.back();
    }else if(n==K+1){
        q.pop_back();
        ans = q.back(); 
    }else if(n==K+2){
        q.pop_back();
        q.pop_back();
        ans = q.back();
    }
    cout<<ans<<"\n";
	return 0;
}