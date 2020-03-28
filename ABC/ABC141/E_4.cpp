#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)
typedef long long ll;

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
	int N;
	cin >> N;
    string S;
    cin>>S;
    int m = 0;


    rep(s_i,N){
        string str = S.substr(s_i,N-s_i);
        vector<int> A(str.size());
        A[0]= S.size();        
        int i=1,j=0;
        while(i<str.size()){
            while(i+j<str.size()&&str[j]==str[i+j]) ++j;
            A[i]=j;
            m = max(m,min(j,i));
            if(j==0){
                ++i;continue;
            }
            int k=1;
            while(i+k<str.size() && k+A[k]<j){
                A[i+k] = A[k];++k;
            }
            i+=k;j-=k;
        }
        // for(auto a:A){
        //     cout<<a;
        // }
        // cout<<"\n";
    }
    cout<<m<<"\n";
}


