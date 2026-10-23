// Problem: MERGESORTED
// Platform: codechef
// Language: #include <iostream>
#include <vector>
using namespace std;

void mergeArrays(const vector<int>& a, const vector<int>& b) {
    int n = a.size(), m = b.size();
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (a[i] < b[j]) cout << a[i++] << " ";
        else cout << b[j++] << " ";
    }
    while (i < n) cout << a[i++] << " ";
    while (j < m) cout << b[j++] << " ";
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& ai : a) cin >> ai;
    for (int& bi : b) cin >> bi;
    
    mergeArrays(a, b);
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MERGESORTED?tab=solution
// Solved on: 2026-10-23T16:19:12.163Z

import java.util.Scanner;

public class Main {
    public static void mergeArrays(int[] a, int[] b, int n, int m) {
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (a[i] < b[j]) System.out.print(a[i++] + " ");
            else System.out.print(b[j++] + " ");
        }
        while (i < n) System.out.print(a[i++] + " ");
        while (j < m) System.out.print(b[j++] + " ");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        int[] a = new int[n];
        int[] b = new int[m];
        for (int i = 0; i < n; i++) a[i] = sc.nextInt();
        for (int j = 0; j < m; j++) b[j] = sc.nextInt();
        
        mergeArrays(a, b, n, m);
    }
}
