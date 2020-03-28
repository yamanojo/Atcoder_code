#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;
    typedef pair<int,int> P;
    vector<P> xy;
   
    rep(i,N){
        int x,y;
        cin>>x>>y;
        xy.push_back(P{x,y});
    }

	
	return 0;
}