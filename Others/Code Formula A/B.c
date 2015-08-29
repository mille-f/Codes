#include <stdio.h>

int main(void)
{
    int a, b, tmp;
    char s[100] = "xxxxxxxxxx";
    
    scanf("%d %d", &a, &b);
    
    while ( a > 0 ) {
        scanf("%d", &tmp);
        s[tmp] = '.';
        a--;
    }
    
    while ( b > 0 ) {
        scanf("%d", &tmp);
        s[tmp] = 'o';
        b--;
    }
    
    printf("%c %c %c %c\n", s[7], s[8], s[9], s[0]);
    printf(" %c %c %c\n", s[4], s[5], s[6]);
    printf("  %c %c\n", s[2], s[3]);
    printf("   %c\n", s[1]);
    
    return 0;
}