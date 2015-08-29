#include <stdio.h>

int main(void)
{
    char s[100] = "ABCDE";
    char a;
    int res, k;
    
    scanf("%c", &a);
    
    for ( k = 0; k < 5; k++ ) {
        if ( s[k] == a ) {
            res = k+1;
        }
    }
    
    printf("%d\n", res);
    
    return 0;
}