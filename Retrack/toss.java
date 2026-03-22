/*
You are given a string 𝑠
 consisting only of characters 'H' (heads) and 'T' (tails).

You can perform the following operation any number of times:

Choose an index 𝑖
 (1≤𝑖≤𝑛−2
), and flip the characters at positions 𝑖
 and 𝑖+2
. Flipping means changing 'H' to 'T' and 'T' to 'H'.

Determine whether it is possible to make all characters of the string equal to 'H'.

Input
The first line contains a single integer 𝑛
 (1≤𝑛≤2⋅105
).

The second line contains a string 𝑠
 of length 𝑛
 consisting of characters 'H' and 'T'.

Output
For each test case, print "YES" if it is possible to make all characters equal to 'H', otherwise print "NO".

You can print answers in any case (for example, "yes", "Yes", "YES" will all be accepted).

Example
InputCopy
4
HTHT
OutputCopy
YES
Note
For 𝑠=𝙷𝚃𝙷𝚃
, choose 𝑖=2
 and flip positions 2
 and 4
. The string becomes HHHH.

Thus, it is possible to make all characters equal to 'H', so the answer is "YES".
*/

import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
	    String s;
	    
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		s = scan.next();
		
		if(n < 3) {
		    for(int i = 0; i < n; i++)
		    {
		        if(s.charAt(i) != 'H') {
		            System.out.println("NO");
		            return;
		        }
		    }
		    System.out.println("YES");
		    return;
		}
		int evenTCount = 0, oddTCount = 0;
		for(int i = 0; i < n; i++)
		{
		    if(s.charAt(i) == 'T') {
		        if(i % 2 == 0) {
		            evenTCount++;
		        }
		        else {
		            oddTCount++;
		        }
		    }
		}
		if(evenTCount % 2 == 0 && oddTCount % 2 == 0) {
		    System.out.println("YES");
		}
		else {
		    System.out.println("NO");
		}
	}
}
