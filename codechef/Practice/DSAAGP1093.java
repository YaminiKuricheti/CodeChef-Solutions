// Problem: DSAAGP1093
// Platform: codechef
// Language: import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static int binarySearch(int[] arr, int n, int k) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (arr[middle] == k) {
                return middle;
            } else if (arr[middle] > k) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return -1; // k not found
    }
    public static void main (String[] args) throws java.lang.Exception
    {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        System.out.println(binarySearch(arr, n, k));
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP01/problems/DSAAGP1093?tab=solution
// Solved on: 2026-10-27T16:29:40.348Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
    public static int binarySearch(int[] arr, int n, int k) {
        int left = 0, right = n - 1;
        while (left <= right) {
            int middle = (left + right) / 2;
            if (arr[middle] == k) {
                return middle;
            } else if (arr[middle] > k) {
                right = middle - 1;
            } else {
                left = middle + 1;
            }
        }
        return -1; // k not found
    }
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int k = scanner.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
        System.out.println(binarySearch(arr, n, k));
	}
}