// Problem: Editorial: Generating the Nᵗʰ Row of Pascal's Triangle
// Platform: codechef
// Language: #include <iostream>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        // Using combination formula to compute each element
        unsigned long long element = 1;
        for (int k = 0; k < N; k++){
            cout << element;
            if (k != N - 1)
                cout << " ";
            element = element * (N - 1 - k) / (k + 1);
        }
        cout << "\n";
    }
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/PREP01?tab=solution
// Solved on: 2026-10-23T16:08:05.010Z

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder output = new StringBuilder();

        int t = Integer.parseInt(br.readLine());
        while (t-- > 0) {
            int n = Integer.parseInt(br.readLine());
            ArrayList<Long> row = generatePascalsTriangle(n);

            for (long val : row) {
                output.append(val).append(" ");
            }
            output.append("\n");
        }

        System.out.print(output);
    }

    public static ArrayList<Long> generatePascalsTriangle(int n) {
        ArrayList<Long> row = new ArrayList<>();
        row.add(1L);

        long prev = 1;
        for (int i = 1; i < n; i++) {
            long curr = prev * (n - i) / i;
            row.add(curr);
            prev = curr;
        }

        return row;
    }
}