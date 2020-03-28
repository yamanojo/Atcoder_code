#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N,M;
	// 出入力
	cin>>N>>M;
    typedef pair<int,int> pair;
    vector<pair> st(M);
    int s,t;
    for(int i=0;i<M;i++){
        cin>>s>>t;
        st[i]= pair(s,t);
    }
    sort(st.begin(),st.end(),[](pair p1, pair p2){return p1.first < p2.first;});
    int A[N][]
    for(auto p:st){
        s = p.first;
        t = p.second;
    }

	// cout << ans << "\n";
    for(int i=0;i<M;i++){
        cout<<st[i].first<<" "<<st[i].second<<"\n";
    }
	return 0;
}