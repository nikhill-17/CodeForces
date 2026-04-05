/*
So, Macaque has passed his first challenge (and is not acknowledging your help whatsoever). After all, it was only
given to him so he could engage in his greatest pleasure — crunching on desiccated freezedried hamburgers 
and yelling 'trivial' at the screen. However, he has another, much more important task ahead of him, and he has once 
again enlisted you to help him.

You are given 7 integers 𝑎1,𝑎2,…,𝑎7.

You must negate 6 out of the 7 integers (that is, multiply them by −1). Over all possible ways to negate 6
out of the 7 integers, find the maximum possible sum of 𝑎.

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡(1≤𝑡≤6767). 
The description of the test cases follows.

The first and only line of each test case contains 7 space-separated integers 𝑎1,𝑎2,…,𝑎7(−67≤𝑎𝑖≤67).

Output
For each test case, output the maximum sum of 𝑎 after negating 6 out of the 7 integers, on a new line.

Example
Input
4
41 41 41 41 41 41 41
6 9 4 20 6 7 67
1 2 3 4 5 6 7
6 7 6 7 6 7 6
OutputCopy
-205
15
-14
-31
Note
In the first test case, no matter which 6
 integers we pick to negate, the maximum sum is −41−41−41−41−41−41+41=−205.

In the second test case, we can negate all integers except 𝑎7
 to obtain a sum of −6−9−4−20−6−7+67=15.
*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while(t--) // loop for each test case
    {
        vector<int> v; // vector to store 7 integers

        // taking input of 7 elements
        for(int i = 0; i < 7; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp); // adding element to vector
        }

        sort(v.begin(), v.end()); // sorting vector in ascending order

        // multiplying first 6 elements by -1
        // (since after sorting, these are the smallest elements)
        for(int i = 0; i < 6; i++)
        {
            v[i] = -1 * v[i];
        }

        int max_sum = 0; // variable to store final sum

        // summing all elements of vector
        for(int i = 0; i < 7; i++)
        {
            max_sum += v[i];
        }

        // printing the result
        cout << max_sum << "\n";
    }

    return 0; // successful execution
}