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
    int L[N];
    for(int i=0;i<N;i++){
        cin>>L[i];
    }
    sort(L,L+N);
    int ans = 0;
    for(int i=0;i<N-2;i++){
        for(int j=i+1;j<N-1;j++){
            for(int k=j+1;k<N;k++){
                if(L[i]+L[j]>L[k]){
                    ++ans;
                }
            }
        }
    }
    cout<<ans<<"\n";

    return 0;
}