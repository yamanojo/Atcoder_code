#include <stdio.h>
#include <string.h>
int main(void){
    char s[100+1];
    scanf("%s",s);
    int n = strlen(s);
    for(int i= 0;i<n;i++){
        if (i%2 == 0){
            if(s[i]=='L'){
                puts("No");
                return 0;
            }
        }else{
            if(s[i]=='R'){
                puts("No");
                return 0;
            }
        }
    }
    puts("Yes");
    return 0;

}