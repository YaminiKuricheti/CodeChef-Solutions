// Problem: DSCPPAS139
// Platform: codechef
// Language: import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static int firstOccurrence(int[] arr, int n, int target) {
        int left = -1, right = n;

        while (right - left > 1) {
            int middle = (left + right) / 2;
            if (arr[middle] >= target) {
                right = middle;
            } else {
                left = middle;
            }
        }
        return right;
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        // your code goes here
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        System.out.println(n - firstOccurrence(arr, n, 1));
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP03/problems/DSCPPAS139?tab=solution
// Solved on: 2026-10-27T16:32:18.605Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static int firstOccurrence(int[] arr, int n, int target) {
        int left = -1, right = n;

        while (right - left > 1) {
            int middle = (left + right) / 2;
            if (arr[middle] >= target) {
                right = middle;
            } else {
                left = middle;
            }
        }
        return right;
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        System.out.println(n - firstOccurrence(arr, n, 1));
	}
}