#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
    string S;
    ll Q;
	cin>>S;
    cin>>Q;
    ll t;
    ll f;
    char c;
    ll flag = 1;
    ll tmp_flag = 1;

    vector<char> front_ls,back_ls;

    rep(i,Q){
        cin>>t;
        if(t==1){
            flag*=-1;
        }else{
            cin>>f;
            cin>>c;
            if(f==1){
                tmp_flag = 1*flag;
            }else{
                tmp_flag = -1*flag;
            }
            if(tmp_flag == 1){
                front_ls.push_back(c);
            }else{
                back_ls.push_back(c);
            }
        }
    }

    if(flag == 1){
        rep(i,front_ls.size()){
            cout<<front_ls[front_ls.size()-1-i];
        }
        cout<<S;
        rep(i,back_ls.size()){
            cout<<back_ls[i];
        }
        cout<<"\n";
    }else{
        rep(i,back_ls.size()){
            cout<<back_ls[back_ls.size()-1-i];
        }
        rep(i,S.size()){
            cout<<S[S.size()-1-i];
        }
        rep(i,front_ls.size()){
            cout<<front_ls[i];
        }
        
        cout<<"\n";
    }
	
	return 0;
}