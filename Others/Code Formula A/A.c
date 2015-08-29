#include <stdio.h>

int main(void)
{
    int a;
    int k;
    
    scanf("%d", &a);
    
    for ( k = 1; k <= 100; k++ ) {
        if ( (k*k*k) == a ) {
            puts("YES"); return 0;
        }
    }
    
    puts("NO");
    
    return 0;
}