#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    ll N;
    set<string> st;
    cin>>N;
    string s;
    rep(i,N){
        cin>>s;
        st.insert(s);
    }
    ll ans = st.size();
    cout<<ans<<"\n";
	return 0;
}