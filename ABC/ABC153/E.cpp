#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll H,N;
	cin >> H>>N;
    typedef pair<double,double> P;
    vector<P> ab(N);
    rep(i,N){
        double a,b;
        cin>>a>>b;
        ab[i]= P(a,b);
    }

    sort(ab.begin(),ab.end(),[](P p1,P p2){p1.first/p1.second<p2.first/p2.second;});

    
	
	
	return 0;
}
