#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	// 出入力
	cin >> N;
	vector<int> P(N);
    vector<int> Q(N);
    for(int i=0;i<N;i++){
        cin>>P[i];
    }
    for(int i=0;i<N;i++){
        cin>>Q[i];
    }

    vector<int> k(9);
    k[0]=1;
    for(int i=1;i<=8;i++){
        k[i] = k[i-1]*i;
    }
    int a,b;
    a=0;b=0;;
    for(int i=0;i<N;i++){
        int n = P[i]-1;
        for(int j=0;j<i;j++){
            if(P[j]<P[i]){
                --n;
            }
        }
        a+=k[N-1-i]*n;
    }
    for(int i=0;i<N;i++){
        
        int n = Q[i]-1;
        for(int j=0;j<i;j++){
            if(Q[j]<Q[i]){
                --n;
            }
        }
        b+=k[N-1-i]*n;
    }

    // for(int i=0;i<9;i++){
    //     cout<<k[i]<<"\n";
    // }
    // cout<<a<<b<<"\n";
    int ans =0;
    ans = abs(a-b);
    cout<<ans<<"\n";
	return 0;
}