/*
Upon arriving at school, Macaque was rather brusquely greeted by his friend, AG-88301, the latter having skived off 
his homework due to spending the entire night yapping to an unsuspecting stranger about his groundbreaking work on a 
proof of the Collatz conjecture and his 67-th unreciprocated love interest. So, as had become customary, AG-88301, 
with ever decreasing levels of gratitude or appreciation, made Macaque do his homework for him. At this point, 
Macaque had had enough, and turned to his minions (you guys!) to solve AG-88301's homework task.

You are given an integer 𝑛. You must construct a permutation∗ of length 3𝑛such that, if you partition the 
permutation into 𝑛 contiguous blocks with 3 elements, the sum of the medians† of these blocks is maximised.

More formally, you must construct a permutation 𝑝 of length 3𝑛 such that ∑𝑛−1𝑖=0median(𝑎3𝑖+1,𝑎3𝑖+2,𝑎3𝑖+3) is maximised. 
If there are multiple possible 𝑝, output any.

∗
A permutation of length 𝑛 is an array consisting of 𝑛 distinct integers from 1 to 𝑛in arbitrary order. For example, [2,3,1,5,4]
is a permutation, but [1,2,2] is not a permutation (2 appears twice in the array), and [1,3,4]is also not a permutation (𝑛=3
but there is 4 in the array).

†
The median of an array 𝑏 containing 3 elements is the 2-nd element after 𝑏 is sorted in non-decreasing order.

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡(1≤𝑡≤104). 
The description of the test cases follows.

The first and only line of each test case contains an integer 𝑛 (1≤𝑛≤105).

It is guaranteed that the sum of 3𝑛 does not exceed 3⋅105 over all test cases.

Output
For each test case, output a permutation 𝑝 such that the sum of the medians of the contiguous blocks is maximised. 
If there are multiple possible 𝑝, output any.

Example
Input
3
2
1
3
Output
1 3 4 2 5 6 
3 1 2
5 2 4 8 3 9 7 1 6
Note
In the first test case, [1,3,4,2,5,6] is a possible answer because median(1,3,4)+median(2,5,6)=3+5=8
, and it can be shown that 8 is the maximal possible sum of medians.

In the second test case, [3,1,2] is a possible answer because the only achievable sum of medians when 𝑛=1 is 2.
*/

#include <iostream>
using namespace std;

int main()
{
    int t; // number of test cases
    cin >> t;

    while(t--) // loop for each test case
    {
        int n; // given integer n
        cin >> n;

        // we need to construct a permutation of size 3n
        // loop runs n times, each time printing a block of 3 elements
        for(int i = 1; i <= n; i++)
        {
            // printing 3 elements per block:
            // 1st element: i (small number)
            // 2nd element: n + 2*i - 1 (middle value in this block)
            // 3rd element: n + 2*i (largest value in this block)
            // this arrangement ensures the median (middle after sorting)
            // contributes optimally to the total sum
            cout << i << " " << n + 2 * i - 1 << " " << n + 2 * i << " ";
        }

        cout << "\n"; // move to next line after each test case
    }

    return 0; // successful execution
}