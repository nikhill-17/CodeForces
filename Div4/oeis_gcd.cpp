/*
Macaque, being a terrible problemsetter, decided to search for funny sequences on the OEIS∗ one day, so he could 
gain inspiration for his doomed problemsetting job for the Pan-Mammalian Olympiad in Informatics (PMOI). To his 
delight, he found one, and thought it would be funny to make you, his loyal tester, solve it:

Construct a sequence 𝑎 containing 𝑛 integers such that gcd(𝑎𝑖,𝑎𝑖+1)† is distinct over all 1≤𝑖≤𝑛−1. 
It is guaranteed that at least one sequence 𝑎 exists.

∗
Online Encyclopedia of Integer Sequences, the favourite website of math nerds, overly astute testers, and insufficiently rigorous coordinators.

†
gcd(𝑥,𝑦) refers to the greatest common divisor of integers 𝑥 and 𝑦.

Input
Each test contains multiple test cases. The first line contains the number of test cases 𝑡 (1≤𝑡≤100). 
The description of the test cases follows.

The following 𝑡 lines contain one integer 𝑛 (2≤𝑛≤104) — the desired length of the sequence.

It is guaranteed the sum of 𝑛 over all test cases does not exceed 10^4.

Output
For each query, output your answer — a sequence 𝑎 of 𝑛 space-separated integers (1≤𝑎𝑖≤1018).

Example
Input
2
3
5
Output
1 6 2
134 67 69 207 414
Note
In the first test case, the sequence [1,6,2] is a possible answer. This is because gcd(1,6) is not equal to gcd(6,2).

In the second test case, the sequence [134,67,69,207,414] is a possible answer. This is because the values of 
gcd(𝑎𝑖,𝑎𝑖+1) for all 𝑖 between 1 and 𝑛−1 are distinct. For reference, they are 67, 1, 69 and 207.
*/

#include <iostream>
#include <vector>
using namespace std;

// function to check if a number is prime
bool isPrime(int x)
{
    // checking divisibility from 2 to sqrt(x)
    for(int i = 2; i * i <= x; i++)
    {
        if(x % i == 0) {
            return false; // not prime if divisible
        }
    }
    return true; // prime if no divisors found
}

int main()
{
    int t; // number of test cases
    cin >> t;

    vector<int> primes; // vector to store prime numbers

    // generating first ~10005 prime numbers
    // enough to handle maximum constraints
    for(int i = 2; primes.size() < 10005; i++)
    {
        if(isPrime(i)) {
            primes.push_back(i); // store prime
        }
    }

    while(t--) // loop for each test case
    {
        int n; // length of required sequence
        cin >> n;

        // constructing sequence of length n
        for(int i = 0; i < n; i++)
        {
            // each element is product of consecutive primes:
            // a[i] = primes[i] * primes[i+1]
            // this ensures:
            // gcd(a[i], a[i+1]) = primes[i+1]
            // so all gcds are distinct (since primes are unique)
            cout << (long long)primes[i] * primes[i + 1] << " ";
        }

        cout << "\n"; // new line after each test case
    }

    return 0; // successful execution
}