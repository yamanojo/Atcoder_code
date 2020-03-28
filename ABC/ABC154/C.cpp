#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
	set<ll> st;
    string ans = "YES";
	ll a;
    rep(i,N){
        cin>>a;
        if(st.find(a)!= st.end()){
            ans = "NO";
            break;
        }else{
            st.insert(a);
        }
    }
    cout<<ans<<"\n";
	return 0;
}