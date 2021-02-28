#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll ctoll(char a){
    return (ll)a-'0';
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	string N;
    cin>>N;
    ll a;
    a = ctoll(N[N.size()-1]);
    string ans;
    ll h[] = {2,4,5,7,9};
    ll p[] = {0,1,6,8};
    ll b[] = {3};
    for(auto v:h){
        if(v==a){
            ans = "hon";
        }
    }
	for(auto v:p){
        if(v==a){
            ans = "pon";
        }
    }
    for(auto v:b){
        if(v==a){
            ans = "bon";
        }
    }
    cout<<ans<<"\n";
	return 0;
}