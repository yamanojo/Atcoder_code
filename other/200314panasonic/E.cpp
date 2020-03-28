#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll zalgo(string a,string b){
    string S = a+b;
    ll A[S.size()];
    A[0] = S.size();
    int i = 1, j = 0;
    while (i < S.size()) {
        while (i+j < S.size() && (S[j] == S[i+j]||S[j]=='?'||S[i+j]=='?')) ++j;
        A[i] = j;
        if (j == 0) { ++i; continue;}
        int k = 1;
        while (i+k < S.size() && k+A[k] < j) A[i+k] = A[k], ++k;
        i += k; j -= k;
    }
    ll max_n = 0;
    rep(i,b.size()){
        if(A[S.size()-1-i]==i+1){
            max_n = i+1;
        }
    }
    return max_n;
}

pair<string,string> calc(string a,string b){
    ll x = zalgo(a,b);
    ll y = zalgo(b,a);
    string xs,ys;
    xs = b+a.substr(x,a.size()-x);
    ys = a+b.substr(x,b.size()-y);
    return {xs,ys};
}


int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	string a,b,c;
	cin>>a>>b>>c;
    pair<string,string> P,P2,P3;

    P = calc(a,b);
    cout<<P

    P2 = calc(P.first,c);
    P3 = calc(P.second,c);

    ll min_l = P2.first.size();
    min_l = min(min_l,(ll)P2.second.size());
    min_l = min(min_l,(ll)P3.first.size());
    min_l = min(min_l,(ll)P3.second.size());
    cout<<min_l<<"\n";
	return 0;
}