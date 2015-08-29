#include <stdio.h>

int main(void)
{
    int n, h;
    int a, b, c, d, e;
    int k;
    int res = 0;
    
    scanf("%d%d", &n, &h);
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    
    for ( k = 1; k < n; k++ ) {
        if ( h-e > 0 ) {
            h -= e;
        }
        if ( h > 2*e ) {
            res += a;
            h += b;
        } else {
            res += c;
            h += d;
        }
    }
    
    printf("%d\n", res);
    
    return 0;
}