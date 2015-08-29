#include <stdio.h>

int main(void)
{
    int h;
    int m;
    int res;
    
    scanf("%d %d", &h, &m);
    
    if ( m == 0 ) {
        res = (18-h)*60;
    } else {
        res = (17-h)*60+(60-m);
    }
    
    printf("%d\n", res);
    
    return 0;
}
