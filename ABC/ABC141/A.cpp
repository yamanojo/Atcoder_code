#include <stdio.h>

int main(){
    char s[10];
    scanf("%s",s);
    if (s[0]=='S')
    {
        printf("Cloudy");
        /* code */
    }
    else if (s[0] == 'C')
    {   
        printf("Rainy");
    }
    else
    {
        printf("Sunny");
    }
    
    
    
    return 0;


}