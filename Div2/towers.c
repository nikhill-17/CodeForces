#include <stdio.h>
 
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, m, d;
        scanf("%d %d %d", &n, &m, &d);
        int max_height = (d / m) + 1;
        printf("%d\n", (max_height + n - 1)/max_height);
    }
 
    return 0;
}