#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int calc(int a,int b){
    if(a%b==0){
        return b;
    }
    return calc(b,a%b);
}

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N,M;
	// 出入力
	cin>>N>>M;

    // vector<int> A(N);
    set<int> A;
    int a;
    for(int i=0;i<N;i++){
        cin>>a;
        A.insert(a/2); 
    }
    ll k=1;
    ll tmp_n;
    for(int a:A){
        tmp_n = calc(k,a);
        k = a*k/tmp_n;
    }
    for(int a:A){
        if((k/a)%2==0){
            cout<<0<<"\n";
            return 0;
        }
    }
    ll ans = 0;
    ans = M/k;

    if ((M/k)%2!=0){
        ++ans;
    }
    ans=ans/2;
    
    cout<<ans<<"\n";

	return 0;
}