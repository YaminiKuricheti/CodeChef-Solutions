// Problem: PROBLEM LINK: The Squid Game
// Platform: codechef
// Language: #include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> v(n);
		int sum = 0;
		int smallest_element = 1e6;
		for (int i = 0; i < n; i++) {
			cin >> v[i];
			sum += v[i];
			smallest_element = min(smallest_element, v[i]);
		}
		cout << sum - smallest_element << "\n";
	}
	return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/SQUIDRULE?tab=solution
// Solved on: 2026-10-23T15:46:50.540Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] v = new int[n];
            int totalSum = 0;
            int smallestElement = Integer.MAX_VALUE;

            for (int i = 0; i < n; i++) {
                v[i] = scanner.nextInt();
                totalSum += v[i];
                smallestElement = Math.min(smallestElement, v[i]);
            }
            System.out.println(totalSum - smallestElement);
        }
        scanner.close();
    }
}
