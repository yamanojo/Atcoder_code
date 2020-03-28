#include <bits/stdc++.h>
using namespace std;
typedef long long ll;




int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);

	ll H,W;
	cin>>H>>W;
    vector<vector<int>> map(H, vector<int>(W));
    string s;
    for(int i=0;i<H;i++){
        cin>>s;
        for(int j=0;j<W;j++){
            if(s[j]=='#'){
                map[i][j] =1;
            }
        }
    }
    typedef pair<ll,ll> pair;
    deque<pair> q;
    deque<ll> move_num;
    ll tmp_l=0;
    vector<vector<int>> map_flag(H, vector<int>(W)); 
    ll ans = 1;
    ll h,w;
    pair tmp_q;
    ll max_l=0;
    ll move[2] = {-1,1};
    for(int i=0;i<H;i++){
        for(int j=0;j<W;j++){
            if(map[i][j]==1){
                continue;
            }
            map_flag = map;
            tmp_l=0;
            // スタート地点
            q.push_back(pair(i,j));
            move_num.push_back(tmp_l);
            map_flag[i][j]=1;
            while(!q.empty()){
                tmp_q = q.front();
                h = tmp_q.first;
                w = tmp_q.second;
                tmp_l = move_num.front();
                q.pop_front();
                move_num.pop_front();
                ++tmp_l;
                for(ll k:move){
                    if(0<=h+k&&h+k<H){
                        // 移動出来る時
                        if(map_flag[h+k][w]==0){
                            map_flag[h+k][w]=1;
                            q.push_back(pair(h+k,w));
                            move_num.push_back(tmp_l);
                            max_l = max(max_l,tmp_l);
                        }
                    }
                }
                for(ll k:move){
                    if(0<=w+k&&w+k<W){
                        if(map_flag[h][w+k]==0){
                            map_flag[h][w+k]=1;
                            q.push_back(pair(h,w+k));
                            move_num.push_back(tmp_l);
                            max_l = max(max_l,tmp_l);
                        }
                    }
                }
            }
            // cout<<max_l<<"\n";
        }
    }
    cout<<max_l<<"\n";
	return 0;
}