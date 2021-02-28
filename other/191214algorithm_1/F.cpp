#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

char convert_char(char a){
    if((int)a - 'a' >= 0){
        return (char)(((int)a - 'a') + 'A');
    }else{
        return (char)(((int)a - 'A') + 'a');
    }
}

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
    string S;

    cin>>S;
    ll start_i,fin_i;
    bool flag = false;
    multiset<string> ans_set;
    string tmp_str;
    rep(i,S.length()){
        if((int)S[i]- 'a' >=0){
            continue;
        }else{
            if(flag == false){
                flag = true;
                start_i = i;
            }else{
                flag = false;
                fin_i = i;
                tmp_str = S.substr(start_i,fin_i-start_i+1);
                tmp_str[0] = convert_char(tmp_str[0]);
                tmp_str[tmp_str.size()-1] = convert_char(tmp_str[tmp_str.size()-1]);
                ans_set.insert(tmp_str);
            }
        }
    }
    for(auto v:ans_set){
        v[0] = convert_char(v[0]);
        v[v.size()-1] = convert_char(v[v.size()-1]);
                
        cout<<v;
    }
    cout<<"\n";
	return 0;
}