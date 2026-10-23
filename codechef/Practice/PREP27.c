// Problem: DSA Interview Preparation: 4-Sum Problem Editorial
// Platform: codechef
// Language: #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    vector<vector<int>> result;
    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && a[i] == a[i - 1])
            continue; // Skip duplicate for first number
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && a[j] == a[j - 1])
                continue; // Skip duplicate for second number
            int left = j + 1, right = n - 1;
            while (left < right) {
                long long sum = (long long)a[i] + a[j] + a[left] + a[right];
                if (sum == x) {
                    result.push_back({a[i], a[j], a[left], a[right]});
                    // Skip duplicates for third number
                    while (left < right && a[left] == a[left + 1])
                        left++;
                    // Skip duplicates for fourth number
                    while (left < right && a[right] == a[right - 1])
                        right--;
                    left++;
                    right--;
                } else if (sum < x) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }
    
    cout << result.size() << "\n";
    for (auto &quad : result) {
        cout << quad[0] << " " << quad[1] << " " << quad[2] << " " << quad[3] << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/PREP27?tab=solution
// Solved on: 2026-10-23T16:35:14.574Z


import java.util.*;
import java.io.*;

class Solution {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());
        
        while (T-- > 0) {
            String[] input = br.readLine().split(" ");
            int N = Integer.parseInt(input[0]);
            long X = Long.parseLong(input[1]);
            
            long[] A = new long[N];
            input = br.readLine().split(" ");
            for (int i = 0; i < N; i++) {
                A[i] = Long.parseLong(input[i]);
            }
            
            Arrays.sort(A);
            
            Set<List<Long>> result = new TreeSet<>((a, b) -> {
                for (int i = 0; i < 4; i++) {
                    if (a.get(i).compareTo(b.get(i)) != 0) {
                        return a.get(i).compareTo(b.get(i));
                    }
                }
                return 0;
            });
            
            for (int i = 0; i < N - 3; i++) {
                for (int j = i + 1; j < N - 2; j++) {
                    int left = j + 1;
                    int right = N - 1;
                    
                    while (left < right) {
                        long sum = A[i] + A[j] + A[left] + A[right];
                        
                        if (sum == X) {
                            result.add(Arrays.asList(A[i], A[j], A[left], A[right]));
                            left++;
                            right--;
                        } else if (sum < X) {
                            left++;
                        } else {
                            right--;
                        }
                    }
                }
            }
            
            System.out.println(result.size());
            for (List<Long> quad : result) {
                System.out.println(quad.get(0) + " " + quad.get(1) + " " + quad.get(2) + " " + quad.get(3));
            }
        }
    }
}
