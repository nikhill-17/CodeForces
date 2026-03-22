/*
You are given an array 𝑎
 consisting of 𝑛
 positive integers.

You want to transform this array into a strictly increasing sequence (𝑎1<𝑎2<⋯<𝑎𝑛
).

For each element 𝑎𝑖
, you may perform the following operation at most once:

Replace 𝑎𝑖
 with its last digit (i.e., 𝑎𝑖:=𝑎𝑖mod10
).
For example, if 𝑎𝑖=24
, you can either keep it as 24
 or change it to 4
.

Determine whether it is possible to make the array strictly increasing.

Input
The first line contains an integer 𝑛
 (1≤𝑛≤2⋅105)
.

The second line contains 𝑛
 integers 𝑎1,𝑎2,…,𝑎𝑛
 (1≤𝑎𝑖≤109)
.

Output
Print YES if it is possible to make the sequence strictly increasing, otherwise print NO.

You may print each letter in any case.

Examples
InputCopy
3
15 7 24
OutputCopy
YES
InputCopy
2
18 2
OutputCopy
NO
*/

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a;
    int prev = -1;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        int original = a;
        int mod = a % 10;
        
        int best = INT_MAX;
        
        if(original > prev && original < best) {
            best = original;
        }
        if(mod > prev && mod < best) {
            best = mod;
        }
        if(best == INT_MAX) {
            printf("NO");
            return 0;
        }
        prev = best;
    }
    
    printf("YES");
    return 0;
}