#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N,M;
	cin>>N>>M;
    typedef pair<int,int> P;
    vector<P> vp(N);
    rep(i,N){
        vp[i] = P{i,0};
    }
    rep(i,M){
        int a;
        cin>>a;
        vp[a-1] = P{a-1,i+1};
    }

    stable_sort(vp.begin(),vp.end(),[](P p1,P p2){return p1.second > p2.second;});
    rep(i,N){
        cout<<vp[i].first + 1<<"\n";
    }
	
	return 0;
}
