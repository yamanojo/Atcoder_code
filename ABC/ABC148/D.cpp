#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int count= 0;
    int x;
    for(int i=0;i<N;i++){
        cin >> x;
        if(x == count+1){
            count++;
        }
    }
    int ans = 0;
    if(count==0){
        ans = -1;
    }else{
        ans = N-count;
    }
    
    cout << ans << "\n";

    return 0;
}