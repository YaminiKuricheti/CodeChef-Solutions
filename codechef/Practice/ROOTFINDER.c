// Problem: ROOTFINDER
// Platform: codechef
// Language: // Function to compute mid^n safely
    static long power(int base, int exp, int limit) {
        long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
            if (result > limit) return result; // stop early
        }
        return result;
    }

    // Function to find Nth root of M
    static int nthRoot(int n, int m) {
        int low = 1, high = m;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long val = power(mid, n, m);

            if (val == m) return mid;   // exact root
            if (val < m) low = mid + 1; // search right
            else high = mid - 1;        // search left
        }
        return -1; // no integer root
    }
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/binary-search-new/BINARYSP06/problems/ROOTFINDER?tab=solution
// Solved on: 2026-10-25T16:54:34.052Z

    // Function to compute mid^n safely
    static long power(int base, int exp, int limit) {
        long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
            if (result > limit) return result; // stop early
        }
        return result;
    }

    // Function to find Nth root of M
    static int nthRoot(int n, int m) {
        int low = 1, high = m;
        while (low <= high) {
            int mid = low + (high - low) / 2;
            long val = power(mid, n, m);

            if (val == m) return mid;   // exact root
            if (val < m) low = mid + 1; // search right
            else high = mid - 1;        // search left
        }
        return -1; // no integer root
    }
