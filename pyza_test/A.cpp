#include <bits/stdc++.h>
using namespace std;
# define rep(i,n) for(int i=0;i<(n);i++)

int main(){
	cin.tie(0);
   	ios::sync_with_stdio(false);
	
    int N,S;
    cin>>N>>S;

    vector<vector<int>> T(N,vector<int>(N));
    vector<vector<int>> lose_place(N,vector<int>(N));

    rep(i,N){
        rep(j,N){
            cin>>T[i][j];
        }
    }

    // 後手の場合に同じ形式で表現できるようにする．
    if(S==1){
        rep(i,N){
            rep(j,N){
                if (T[i][j] == 0){
                    T[i][j] = 1;
                }else if(T[i][j] == 1){
                    T[i][j] = 0;
                }
                

            }
        }

    }

    // rep(i,N){
    //     rep(j,N){
    //         cout<<T[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

    vector<int> k_max_num(2);
    vector<int> w_max_num(2);
    
    int tmp_x,tmp_y;
    int ans_x=0,ans_y=0;

    int lose_num = 0;


    // 横方向のチェック
    rep(i,N){
        rep(j,N){
            if(T[i][j]==0){
                k_max_num[0] +=1;
                k_max_num[1] +=1;
                w_max_num[0] =0;
                w_max_num[1] =0;
            }else if(T[i][j]==1){
                k_max_num[0] =0;
                k_max_num[1] =0;
                w_max_num[0] +=1;
                w_max_num[1] +=1;
            }else{
                k_max_num[1] =k_max_num[0]+1;
                k_max_num[0] =0;
                w_max_num[1] =w_max_num[0]+1;
                w_max_num[0] =0;
                tmp_x = j;
                tmp_y = i;         
            }
            
            if(k_max_num[1] >=5){
                ans_x = tmp_x+1;
                ans_y = tmp_y+1;
                goto ANS;
            }
            if(w_max_num[1] >=5){
                lose_place[tmp_y][tmp_x] = 1;
            }
        }
        k_max_num[0] =0;
        k_max_num[1] =0;
        w_max_num[0] =0;
        w_max_num[1] =0;
    }

    // 縦方向のチェック
    rep(j,N){
        rep(i,N){
            if(T[i][j]==0){
                k_max_num[0] +=1;
                k_max_num[1] +=1;
                w_max_num[0] =0;
                w_max_num[1] =0;
            }else if(T[i][j]==1){
                k_max_num[0] =0;
                k_max_num[1] =0;
                w_max_num[0] +=1;
                w_max_num[1] +=1;
            }else{
                
                k_max_num[1] =k_max_num[0]+1;
                w_max_num[1] =w_max_num[0]+1;
                k_max_num[0] =0;
                w_max_num[0] =0;
                
                tmp_x = j;
                tmp_y = i;         
            }
            
            if(k_max_num[1] >=5){
                ans_x = tmp_x+1;
                ans_y = tmp_y+1;
                goto ANS;
            }
            if(w_max_num[1] >=5){
                lose_place[tmp_y][tmp_x] = 1;
            }
        }
        k_max_num[0] =0;
        k_max_num[1] =0;
        w_max_num[0] =0;
        w_max_num[1] =0;

    }

    // 斜め方向のチェック

    for(int k = -(N-1);k<=N-1;k++){
        rep(i,N){
            int j = i+k;
            if(j<0 || j>= N){
                continue;
            }
            if(T[i][j]==0){
                k_max_num[0] +=1;
                k_max_num[1] +=1;
                w_max_num[0] =0;
                w_max_num[1] =0;
            }else if(T[i][j]==1){
                k_max_num[0] =0;
                k_max_num[1] =0;
                w_max_num[0] +=1;
                w_max_num[1] +=1;
            }else{
                k_max_num[1] =k_max_num[0]+1;
                w_max_num[1] =w_max_num[0]+1;
                k_max_num[0] =0;
                w_max_num[0] =0;
                tmp_x = j;
                tmp_y = i;
            }            
            if(k_max_num[1] >=5){
                ans_x = tmp_x+1;
                ans_y = tmp_y+1;
                goto ANS;
            }
            if(w_max_num[1] >=5){
                lose_place[tmp_y][tmp_x] = 1;
            }

        }
        k_max_num[0] =0;
        k_max_num[1] =0;
        w_max_num[0] =0;
        w_max_num[1] =0;
   
    }

    for(int k = 0;k<2*N;k++){
        rep(i,N){
            int j = -i+k;
            if(j<0 || j>= N){
                continue;
            }
            if(T[i][j]==0){
                k_max_num[0] +=1;
                k_max_num[1] +=1;
                w_max_num[0] =0;
                w_max_num[1] =0;
            }else if(T[i][j]==1){
                k_max_num[0] =0;
                k_max_num[1] =0;
                w_max_num[0] +=1;
                w_max_num[1] +=1;
            }else{
                k_max_num[1] =k_max_num[0]+1;
                w_max_num[1] =w_max_num[0]+1;
                k_max_num[0] =0;
                w_max_num[0] =0;
                tmp_x = j;
                tmp_y = i;         
            }
            
            if(k_max_num[1] >=5){
                ans_x = tmp_x+1;
                ans_y = tmp_y+1;
                goto ANS;
            }
            if(w_max_num[1] >=5){
                lose_place[tmp_y][tmp_x] = 1;
            }

        }
        k_max_num[0] =0;
        k_max_num[1] =0;
        w_max_num[0] =0;
        w_max_num[1] =0;   
    }

    
    // 敗北条件のチェック
    rep(i,N){
        rep(j,N){
            if(lose_place[i][j]==1){
                lose_num +=1;
                ans_x = j+1;
                ans_y = i+1;
            }
        }
    }

    if(lose_num>=2){
        cout<<"LOSE"<<"\n";
        return 0;
    }
    // 敗北回避
    if(lose_num ==1){
        goto ANS;
    }

    // どこでも負けない
    if(lose_num == 0){
        rep(i,N){
            rep(j,N){
                if(T[i][j]==-1){
                    ans_x = j+1;
                    ans_y = i+1;
                    goto ANS;
                }
            }
        }
    }


    ANS:
    cout<<ans_x<<" "<<ans_y<<"\n";
	
	return 0;
}