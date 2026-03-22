/*
You are given two types of coins with values a and b. Both values are positive integers and share no common divisors other than 1. You have an unlimited supply of each coin.

Using only these two coins and without receiving change, certain amounts of money cannot be formed exactly.

Your task is to determine the largest monetary value that cannot be formed using any combination of these two coins.

It is guaranteed that such a value exists.

Input
The only line contains two integers 𝑎
 and 𝑏
 (1≤𝑎,𝑏≤109)
 — the values of the two coins.

It is guaranteed that gcd(𝑎,𝑏)=1
.

Output
Print a single integer representing the maximum amount that cannot be formed using the given coin denominations.

Example
InputCopy
3 7
OutputCopy
11
Note
Explanation

For 𝑎=3
 and 𝑏=7
, we can form values like: [ 3, 6, 7, 9, 10, 12, 13, 14, ... ]

However, some small values cannot be represented: [ 1, 2, 4, 5, 8, 11 ]

Among all such values, the largest one is 11
.

Thus, the answer is: [ 11 ]
*/

#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    long long res = (long long)a * b - (a + b);
    printf("%lld", res);

    return 0;
}