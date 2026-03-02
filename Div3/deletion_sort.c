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
        int not_decreasing = 1;
        for(int i = 0; i < n - 1; i++)
        {
            if(a[i] > a[i + 1]) {
                not_decreasing = 0;
                break;
            }
        }
        if(not_decreasing) {
            printf("%d\n", n);
        }
        
        else {
            printf("1\n");
        }
    }
 
    return 0;
}