#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }
        int found = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == 67) {
                found = 1;
            }
        }
        if(found) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
 
    return 0;
}