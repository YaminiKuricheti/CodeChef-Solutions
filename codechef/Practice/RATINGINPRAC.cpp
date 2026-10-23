// Problem: PROBLEM LINK:
// Platform: codechef
// Language: #include <bits/stdc++.h>    
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
      int n;
      cin>>n; 
      vector<int> a(n);
      for(auto &x : a)
        cin>>x;
      vector<int> b(a);
      sort(a.begin() , a.end());
      bool sorted = true;
      for(int i = 0; i < n; i++)
      {
        if(a[i]!=b[i])
          sorted = false;
      }

      cout<<(sorted ? "Yes" : "No")<<endl;
    }
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/RATINGINPRAC?tab=solution
// Solved on: 2026-10-23T15:44:07.324Z

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();

        while (t-- > 0) {
            int n = scanner.nextInt();
            int[] d = new int[n];
            
            for (int i = 0; i < n; i++) {
                d[i] = scanner.nextInt();
            }
            
            boolean isNonDecreasing = true;
            for (int i = 1; i < n; i++) {
                if (d[i] < d[i - 1]) {
                    isNonDecreasing = false;
                    break;
                }
            }

            System.out.println(isNonDecreasing ? "Yes" : "No");
        }
        scanner.close();
    }
}
