// Problem: PROBLEM LINK:  Red Light, Green Light
// Platform: codechef
// Language: #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]>k) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/DOLL?tab=solution
// Solved on: 2026-10-23T15:41:49.322Z

import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner scanner = new Scanner(System.in);
        int t = scanner.nextInt();
        while (t-- > 0) {
            int n = scanner.nextInt();
            int k = scanner.nextInt();
            int[] arr = new int[n];
            int ans = 0;
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }
            for (int i = 0; i < n; i++) {
                if (arr[i] > k) ans++;
            }
            System.out.println(ans);
        }
        scanner.close();

	}
}
