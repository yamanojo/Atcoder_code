#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N,M,L;
	// 出入力
	cin>>N>>M>>L;
    for(int i=0;i<M;i++){

    
    int Q;
    cin>>Q;
    typedef pair<int,int> pair;
    vector<pair<int,int>> st_v;
    int s,t;
    for(int i=0;i<Q;i++){
        cin>>s>>t;
        st_v.emplace_back(pair(s,t));
    }

	// cout << ans << "\n";

	return 0;
}
