// Problem: PROBLEM LINK:
// Platform: codechef
// Language: #include<bits/stdc++.h>
using namespace std;
#define lli long long

lli maxSubArraySum(vector<lli> a, int n)
{
    lli max_tot = INT_MIN, m = 0;
 
    for (int i = 0; i < n; i++) {
        m = m + a[i];
        if (max_tot < m)
            max_tot = m;
 
        if (m < 0)
            m = 0;
    }
    return max_tot;
}

int main(){

    // freopen("output.txt","r",stdin);
    // freopen("output1.txt","w",stdout);
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n;
        vector<lli> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cin>>m;
        vector<lli> b(m);
        lli p=0;
        for(int i=0;i<m;i++){
            cin>>b[i];
            if(b[i]>0)p+=b[i];
        }
        long long maxx;

        a.insert(a.begin(),p);
        maxx=maxSubArraySum(a,n+1);
        a.erase(a.begin(),a.begin()+1);
        a.insert(a.begin()+n,p);
        maxx=max(maxx,maxSubArraySum(a,n+1));
        cout<<maxx<<endl;
    } 
}
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/MAXSUBARR?tab=solution
// Solved on: 2026-10-24T06:29:29.062Z

import java.util.*;

public class Main {

    public static long maxSubArraySum(ArrayList<Long> a, int n) {
        long max_tot = Long.MIN_VALUE;
        long m = 0;

        for (int i = 0; i < n; i++) {
            m += a.get(i);

            if (max_tot < m)
                max_tot = m;

            if (m < 0)
                m = 0;
        }
        return max_tot;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();

            ArrayList<Long> a = new ArrayList<>();
            for (int i = 0; i < n; i++) {
                a.add(sc.nextLong());
            }

            int m = sc.nextInt();
            long p = 0;

            for (int i = 0; i < m; i++) {
                long x = sc.nextLong();
                if (x > 0)
                    p += x;
            }

            long maxx;

            // Case 1: insert at beginning
            a.add(0, p);
            maxx = maxSubArraySum(a, n + 1);

            // restore
            a.remove(0);

            // Case 2: insert at end
            a.add(p);
            maxx = Math.max(maxx, maxSubArraySum(a, n + 1));

            System.out.println(maxx);
        }

        sc.close();
    }
}