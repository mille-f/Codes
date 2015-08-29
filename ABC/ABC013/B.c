#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b;
    int c;
    
    scanf("%d%d", &a,&b);
    
    if ( abs(a-b) <= 5 ) {
        c = abs(a-b);
    }
    if ( a > b && abs(a-b) >= 5 ) {
        c = (10-a)+b;
    }
    if ( a < b && abs(a-b) >= 5 ) {
        c = (10-b)+a;
    }
    if ( a > 9 || a < 0 || b > 9 || b < 0 || a == b ) {
        return 0;
    }
    
    printf("%d\n", c);
    
    return 0;
}
        