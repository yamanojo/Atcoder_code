#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
       
	int n;
	cin >> n;
    string s;
    cin>>s;
    map<char,vector<int>>alpha;
    char c ='a';
    rep(i,26){
        vector<int> v;
        alpha[i]=v;
        c++;
    }
    rep(i,n){
        alpha[s[i]].push_back(i);
    }


    int smax = 0;

    rep(i,n){
        char c = s[i];
        for(auto j:alpha[c]){
            if(i==j) continue;

            int k=0;
            
            while(i+k<j && j+k<n){
                if(s[i+k]==s[j+k]){
                    ++k;
                }else{
                    smax = max(k,smax);
                    break;
                }
            }
            smax=max(k,smax);
        }

    }
	cout<<smax<<"\n";
	
	return 0;
}