#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	// 出入力
	cin>>N;
    vector<int> L(N);
    for(int i=0;i<N;i++){
        cin>>L[i];
    }
    sort(L.begin(),L.end());
    
    int ans = 0;
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            //二分探索で探す
            // cout<<L[i]+L[j]<<"\n";
            auto ind = lower_bound(L.begin()+j+1,L.end(),L[i]+L[j]);
            // cout<<ind-(L.begin()+j+1)<<"\n";
            ans+=ind-(L.begin()+j+1);
            
        }
    }
    cout<<ans<<"\n";

    return 0;
}