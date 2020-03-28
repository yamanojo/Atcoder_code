#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	ll N;
	cin>>N;
    // if(N==1){
    //     cout<<'a'<<"\n";
    //     return 0;
    // }else if(N==2){
    //     cout<<'aa'<<"\n";
    //     cout<<'ab'<<"\n";
    //     return 0;
    // }
    set<string> ans;
    deque<string> q;
    q.push_back("a");
    string s,tmp_s;
    char max_c;
    char c;

    while(!q.empty()){
        s = q.front();q.pop_front();
        if(s.length()==N){
            ans.insert(s);
            continue;
        }
        max_c = 'a';
        rep(i,s.length()){
            if(max_c<s[i]){
                max_c = s[i];
            }
        }
        c = 'a';
        q.push_back(s+c);
        ++c;
        while(max_c+2!=c){
            q.push_back(s+c);
            ++c;
        }
    }
    for(auto v:ans){
        cout<<v<<"\n";
    }   
    return 0;
}