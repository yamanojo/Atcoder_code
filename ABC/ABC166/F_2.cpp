#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

ll ctoll(char a){
    return (ll)-'A';
}
int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	ll N,A,B,C;
    unordered_map<char,ll> mp;
    cin>>N>>A>>B>>C;
    mp['A'] = A;
    mp['B'] = B;
    mp['C'] = C;

    string ans= "Yes";
    ll flag;
    string s;
    vector<char> ans_s(N);
    char c1,c2,c3,c4;
    if((A+B+C)==0){
        ans = "No";
        goto fin;
    }else if((A+B+C)==1){
        cin>>s;
        c1 = s[0];
        c2 = s[1];
        if(mp[c1]==mp[c2]){
            ans = "No";
            goto fin;
        }else{
            if(mp[c1]==0){
                ans_s[0] = c1;
                ++mp[c1];
                --mp[c2];
            }else{
                ans_s[0] = c2;
                ++mp[c2];
                --mp[c1];
            }
        }
        rep(i,N-1){
            cin>>s;
            c1 = s[0];
            c2 = s[1];
            if(mp[c1]==0){
                ans_s[i+1] = c1;
                ++mp[c1];
                --mp[c2];
            }else{
                ans_s[i+1] = c2;
                ++mp[c2];
                --mp[c1];
            }
        }
    }else{
        string next_s;
        cin>>s;
        rep(i,N-1){
            cin>>next_s;
            c3 = next_s[0];
            c4 = next_s[1];
            c1 = s[0];
            c2 = s[1];
            s = next_s;
            if(mp[c1]==0){
                ans_s[i] = c1;
                ++mp[c1];
                --mp[c2];
                continue;
            }
            if(mp[c2]==0){
                ans_s[i] = c2;
                ++mp[c2];
                --mp[c1];
                continue;
            }
            if(c1==c3 || c1 == c4){
                ans_s[i] = c1;
                ++mp[c1];
                --mp[c2];
                continue;
            }else{
                ans_s[i] = c2;
                ++mp[c2];
                --mp[c1];
                continue;
            }
        }
        c1 = s[0];
        c2 = s[1];
        if(c1==0){
            ans_s[N-1] = c1;
        }else{
            ans_s[N-1] = c2;
        }
    }

    fin:
    cout<<ans<<"\n";
    if(ans =="Yes"){
        rep(i,N){
            cout<<ans_s[i]<<"\n";
        }
    }
    

	return 0;
}