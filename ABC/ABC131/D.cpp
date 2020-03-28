#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	cin>>N;
    typedef pair<int,int> P;
    vector<P> pv;
    rep(i,N){
        int a,b;
        cin>>a>>b;
        pv.push_back(P{a,b});
    }

    sort(pv.begin(),pv.end(),[](P p1,P p2){return p1.second<p2.second;});
	
    int t = 0;
    string ans = "Yes";
    for(P p:pv){
        t+=p.first;
        if(t>p.second){
            ans = "No";
            break;
        }
    }
    cout<<ans<<"\n";
    
	return 0;
}