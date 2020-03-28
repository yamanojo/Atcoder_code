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

    string S;
    cin>>S;
    int ind = N;
    vector<int> ans_v;
    while(true){
        if(ind-M<=0){
            ans_v.emplace_back(ind);
            break;
        }
        for(int j=M;j>0;j--){
            if(S[ind-j]=='0'){
                ans_v.emplace_back(j);
                ind -=j;
                break;
            }
            if(j==1){
                cout << -1 << "\n";
                return 0;
            }
            
        }
    }

    for(int i=ans_v.size()-1;i>=0;i--){
        cout << (i == ans_v.size()-1 ? "":" " ) << ans_v[i];
    }
    cout << "\n";
    
	return 0;
}