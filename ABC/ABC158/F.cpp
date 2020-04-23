#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

const ll MOD = 998244353;

class SegmentTree{
    private:
    vector<ll> seg_tree;
    ll n;

    // 保存したい内容
    // 下記は区間の最大値を取得する。
    ll func(ll a,ll b){
        return max(a,b);

    }

    ll getmax(ll a, ll b){

    }

    public:
    SegmentTree(vector<ll> v){
        n=1;
        ll v_size = v.size();
        while(n<v.size){
            n*=2;
        }
        seg_tree.resize(2*n-1);
        rep(i,v_size){
            seg_tree[i+n-1]=v[i];
        }
        for(ll i=n-2;i>=0;i--){
            seg_tree[i]=func(seg_tree[2*i+1],seg_tree[2*i+2]);
        }
    }

};


int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    typedef pair<ll,ll> P;
    vector<P> xd;
    ll x,d;
	rep(i,N){
        cin>>x>>d;
        xd[i] = P{x,d};
    }
    sort(xd.begin(),xd.end(),[](P p1,P p2){return p1.first>p2.first;});
    vector<ll> X(N);
    rep(i,N){
        X[i] = xd[i].first;
    }

    ll num[N];
    num[N-1] = N-1;
    P p;
    ll min_ind=N-1;
    rep(i,N-1){
        p = xd[N-1-i];
        x = p.first;
        d = p.second;
    }


    ll dp[N];


	return 0;
}