#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);

	string S;
	cin >> S;
    ll n = S.length();
    ll ans = 0;
    ll tmp_min_ind = 0;
    ll tmp_min_ind_old = 0;
    ll tmp_max_ind = 0;
    ll up_a = 0;
    ll down_a = 0;
    ll x_l;
    ll x_s;
    for(int i=0;i<n-1;i++){
        if(a.substr(i,2) == "<>"){
            tmp_max_ind = i+1;
        }
        if(a.substr(i,2) == "><"){
            tmp_min_ind_old = tmp_min_ind;
            tmp_min_ind = i+1;
            up_a = tmp_max_ind - tmp_min_ind_old;
            down_a = tmp_min_ind - tmp_max_ind;
            x_l = max(up_a,down_a);
            x_s = min(up_a,down_a);
            ans += x_l*(x_l+1)/2;
            ans += x_s*(x_s-1)/2;
        }
    }
    if(S[S.length()-1] = '<'){
        tmp_max_ind = S.length();
    }
    ;
    tmp_min_ind = S.length();
    if(S[S.end()])
    up_a = tmp_max_ind - tmp_min_ind_old;
    down_a = tmp_min_ind - tmp_max_ind;
    x_l = max(up_a,down_a);
    x_s = min(up_a,down_a);
    ans += x_l*(x_l+1)/2;
    ans += x_s*(x_s-1)/2; 
    
    

	// cout <<  << "\n";
}