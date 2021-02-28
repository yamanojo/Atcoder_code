#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll H,W;
    cin>>H>>W;
    vector<vector<ll>> M(H+2,vector<ll>(W+2));
    
    ll ch,cw,dh,dw;
    cin >>ch>>cw;
    cin>>dh,dw;

    rep(i,H){
        rep(j,W){
            char s;
            cin>>s;
            if(s=='.') M[i+1][W+1]=1;
        }
    }

    vector<vector<ll>> flag(H+2,vector<ll>(W+2));
    vector<vector<ll>> ans(H+2,vector<ll>(W+2));

    typedef pair<ll,ll> P;
    deque<P> q1,q2;
    q1.push_back(P(ch,cw));
    P p;
    ll h,w;
    ll tmp = 0

    while(!q1.empty()){
        p = q1.front();q1.pop_front();
        h = p.first;
        w = p.second;
        ans[h][w]= tmp;
        




	

	
	return 0;
}