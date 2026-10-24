// Problem: NEXTPERM
// Platform: codechef
// Language: #include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int N, K;
    cin >> N >> K;
    for (int i = 0; i < K; i++) {
        vector<int> p(N);
        for (int j = 0; j < N; j++) {
            cin >> p[j];
        }
        // Use library function to get next permutation.
        if(!next_permutation(p.begin(), p.end()))
            sort(p.begin(), p.end());
        for (int j = 0; j < N; j++) {
            cout << p[j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/NEXTPERM?tab=solution
// Solved on: 2026-10-24T06:36:50.614Z

import java.io.*;
import java.util.*;

public class Main {

    public static boolean nextPermutation(int[] p) {
        int n = p.length;
        int k = n - 2;

        // Find the largest index k such that p[k] < p[k+1]
        while (k >= 0 && p[k] >= p[k + 1]) {
            k--;
        }

        // If no pivot, the current permutation is the largest
        if (k < 0) {
            Arrays.sort(p);
            return false;
        }

        int l = n - 1;

        // Find the largest index l > k such that p[l] > p[k]
        while (p[l] <= p[k]) {
            l--;
        }

        // Swap p[k] and p[l]
        int temp = p[k];
        p[k] = p[l];
        p[l] = temp;

        // Reverse from k+1 to end
        reverse(p, k + 1, n - 1);

        return true;
    }

    public static void reverse(int[] arr, int start, int end) {
        while (start < end) {
            int temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        for (int i = 0; i < K; i++) {
            st = new StringTokenizer(br.readLine());
            int[] p = new int[N];

            for (int j = 0; j < N; j++) {
                p[j] = Integer.parseInt(st.nextToken());
            }

            nextPermutation(p);

            for (int j = 0; j < N; j++) {
                System.out.print(p[j] + " ");
            }
            System.out.println();
        }
    }
}