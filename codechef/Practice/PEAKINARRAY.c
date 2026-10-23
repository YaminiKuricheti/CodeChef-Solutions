// Problem: PEAKINARRAY
// Platform: codechef
// Language: #include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    
    // Input array elements
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    
    bool hasPeak = false;
    
    for(int i = 0; i < n; i++) {
        if((i == 0 || A[i] > A[i-1]) && (i == n-1 || A[i] > A[i+1])) {
            cout << A[i] << " ";
            hasPeak = true;
        }
    }
    
    if(!hasPeak) {
        cout << "-1";
    }
    
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/PEAKINARRAY?tab=solution
// Solved on: 2026-10-23T16:02:37.358Z

public static void findPeaks(int[] A, int n) {
    boolean hasPeak = false;

    for (int i = 0; i < n; i++) {
        if ((i == 0 || A[i] > A[i - 1]) && (i == n - 1 || A[i] > A[i + 1])) {
            System.out.print(A[i] + " ");
            hasPeak = true;
        }
    }

    if (!hasPeak) {
        System.out.print("-1");
    }
}