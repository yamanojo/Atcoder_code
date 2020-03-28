#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
    int N,M;
	cin >> N>>M;
    string s;
    int p;
    set<int> ac_set;
    vector<int> miss(N);
    int ac_num = 0;
    int miss_num = 0;
    for(int i=0;i<M;i++){
        cin >>p>>s;
        if(s=="AC"){
            if(ac_set.count(p)==0){
                ac_set.insert(p);
                ++ac_num;
                miss_num+=miss[p];
            }
        }else{
            miss[p]+=1;
        }
    }

	cout<<ac_num<<" "<<miss_num<<"\n";

	return 0;
}