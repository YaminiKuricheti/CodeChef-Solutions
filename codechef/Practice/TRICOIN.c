// Problem: TRICOIN
// Platform: codechef
// Language: int sum(int h) {
	return (h * (h+1) / 2);
}

void solve() {
	int n;
	cin >> n;
	int h = 1;
	while(sum(h) <= n) {
		h ++;
	}
	cout << h - 1 << "\n";
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/TRICOIN?tab=solution
// Solved on: 2026-10-25T17:04:19.695Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    // Function to calculate the sum of the first h natural numbers
    static int sum(int h) {
        return (h * (h + 1)) / 2;
    }

    public static void main(String[] args) throws java.lang.Exception {
        // Create a Scanner object for input
        Scanner sc = new Scanner(System.in);
        
        // Read the number of test cases
        long t = sc.nextLong(); // Use 'long' instead of 'long long int'
        while (t-- > 0) {
            // Read the value of n
            long n = sc.nextLong(); // Use 'long' instead of 'long long int'
            int h = 1;

            // Determine the maximum height h such that the sum of the first h natural numbers is less than or equal to n
            while (sum(h) <= n) {
                h++;
            }

            // Output the maximum height
            System.out.println(h - 1);
        }

        // Close the scanner
        sc.close();
    }
}
