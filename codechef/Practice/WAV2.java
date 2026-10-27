// Problem: PROBLEM LINK:
// Platform: codechef
// Language: import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // Declare variables for number of elements and queries
        Scanner scanner = new Scanner(System.in);
        long _n = scanner.nextLong();
        long _q = scanner.nextLong();

        // Declare a list to store the elements
        long[] _a = new long[(int) _n];
        for (int i = 0; i < _n; i++) {
            _a[i] = scanner.nextLong();
        }

        // Sort the elements
        Arrays.sort(_a);

        // Process each query
        for (int i = 0; i < _q; i++) {
            long _x = scanner.nextLong();
            long _low = 0, _high = _n - 1;
            boolean _flag = false;

            // Perform binary search to find _x
            while (_low <= _high) {
                long _mid = (_low + _high) / 2;
                if (_a[(int) _mid] == _x) {
                    _flag = true;
                    break;
                } else if (_x < _a[(int) _mid]) {
                    _high = _mid - 1;
                } else {
                    _low = _mid + 1;
                }
            }

            // Output results based on the search results
            if (_flag) {
                System.out.println("0");  // _x is found in the array
            } else {
                if (_high == -1) {
                    System.out.println((_n % 2 == 1) ? "NEGATIVE" : "POSITIVE");  // _x is less than all elements
                } else if (_low == _n) {
                    System.out.println("POSITIVE");  // _x is greater than all elements
                } else {
                    System.out.println(((_n - _high - 1) % 2 == 1) ? "NEGATIVE" : "POSITIVE");  // _x is in between elements
                }
            }
        }

        scanner.close(); // Close the scanner
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/WAV2?tab=solution
// Solved on: 2026-10-27T16:25:37.469Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef {
    public static void main(String[] args) throws java.lang.Exception {
        // Declare variables for number of elements and queries
        Scanner scanner = new Scanner(System.in);
        long _n = scanner.nextLong();
        long _q = scanner.nextLong();

        // Declare a list to store the elements
        long[] _a = new long[(int) _n];
        for (int i = 0; i < _n; i++) {
            _a[i] = scanner.nextLong();
        }

        // Sort the elements
        Arrays.sort(_a);

        // Process each query
        for (int i = 0; i < _q; i++) {
            long _x = scanner.nextLong();
            long _low = 0, _high = _n - 1;
            boolean _flag = false;

            // Perform binary search to find _x
            while (_low <= _high) {
                long _mid = (_low + _high) / 2;
                if (_a[(int) _mid] == _x) {
                    _flag = true;
                    break;
                } else if (_x < _a[(int) _mid]) {
                    _high = _mid - 1;
                } else {
                    _low = _mid + 1;
                }
            }

            // Output results based on the search results
            if (_flag) {
                System.out.println("0");  // _x is found in the array
            } else {
                if (_high == -1) {
                    System.out.println((_n % 2 == 1) ? "NEGATIVE" : "POSITIVE");  // _x is less than all elements
                } else if (_low == _n) {
                    System.out.println("POSITIVE");  // _x is greater than all elements
                } else {
                    System.out.println(((_n - _high - 1) % 2 == 1) ? "NEGATIVE" : "POSITIVE");  // _x is in between elements
                }
            }
        }

        scanner.close(); // Close the scanner
    }
}
