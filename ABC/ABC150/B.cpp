#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	// おまじない
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
    string S;
	// 出入力
	cin >> N;
    cin>>S;
    int ans=0;
    for(int i=0;i<S.length()-2;i++){
        if(S.substr(i,3)=="ABC"){
            ans++;
        }
    }
	cout<<ans<<"\n";
	return 0;
}