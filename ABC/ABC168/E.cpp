#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;
const ll MOD = 1000000007;

// aのn乗のMOD
ll modpow(ll a,ll n){
    ll res = 1;
    while(n>0){
        // &１つはビット積
        if(n&1) res = res * a%MOD;
        a = a*a%MOD;
        n>>=1;
    }
    return res;
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	ll N;
    cin>>N;
    typedef pair<ll,ll> P;
    vector<ll> A(N),B(N);
    map<double,ll> mp1,mp2;
    ll a_0 = 0,b_0 = 0;
    ll ab_1 = 0;
    rep(i,N){
        cin>>A[i]>>B[i];
        if(A[i]==0 && B[i]==0){
            continue;
        }
        if(A[i]==0){
            ++a_0;
        }else if(B[i]==0){
            ++b_0;
        }else{
            ++ab_1;
            if(A[i]*B[i]>0){
                mp1[A[i]/B[i]]++;
            }else{
                mp2[-B[i]/A[i]]++;
            }
        }
    }
    vector<ll> l;
    l.push_back(modpow(2,a_0)+modpow(2,b_0)-1);
    double a;
    ll b,c;
    for(auto v:mp1){
        a = v.first;
        b = v.second;
        if(mp2.find(a) != mp2.end()){
            c = mp2[a];
            ab_1-= b;
            ab_1-= c;
            l.push_back(modpow(2,b)+modpow(2,c)-1);
        }
    }
    ll ans = 0;
    ans = modpow(2,ab_1);
    for(auto v:l){
        ans*=v;
        ans%=MOD;
    }
    --ans;
    cout<<ans<<"\n";
	
	return 0;
}