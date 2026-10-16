// Problem: NEASU
// Platform: codechef
// Language: import java.io.*;
import java.util.*;
public class Main {
    static final BufferedInputStream in=new BufferedInputStream(System.in);
    static String next() throws IOException {
        int c;do{c=in.read();}while(c!=-1 && c<=32);
        StringBuilder s=new StringBuilder();
        while(c>32 && c!=-1){s.append((char)c);c=in.read();}
        return s.toString();
    }
    static int nextInt() throws IOException{return Integer.parseInt(next());}
    public static void main(String[] args) throws Exception {
        int n=nextInt();long k=nextInt();int d=nextInt();
        long[] a=new long[n];for(int i=0;i<n;++i)a[i]=nextInt();
        Map<Long,Integer> count=new HashMap<>();
        for(int i=0;i<n;++i){
            if(i>d){long old=a[i-d-1];int v=count.get(old)-1;if(v==0)count.remove(old);else count.put(old,v);}
            if(count.containsKey(k-a[i])){System.out.println("YES");return;}
            count.put(a[i],count.getOrDefault(a[i],0)+1);
        }
        System.out.println("NO");
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/hashing/HASH04/problems/NEASU?tab=solution
// Solved on: 2026-10-16T16:15:48.331Z

import java.io.*;
import java.util.*;
public class Main {
    static final BufferedInputStream in=new BufferedInputStream(System.in);
    static String next() throws IOException {
        int c;do{c=in.read();}while(c!=-1 && c<=32);
        StringBuilder s=new StringBuilder();
        while(c>32 && c!=-1){s.append((char)c);c=in.read();}
        return s.toString();
    }
    static int nextInt() throws IOException{return Integer.parseInt(next());}
    public static void main(String[] args) throws Exception {
        int n=nextInt();long k=nextInt();int d=nextInt();
        long[] a=new long[n];for(int i=0;i<n;++i)a[i]=nextInt();
        Map<Long,Integer> count=new HashMap<>();
        for(int i=0;i<n;++i){
            if(i>d){long old=a[i-d-1];int v=count.get(old)-1;if(v==0)count.remove(old);else count.put(old,v);}
            if(count.containsKey(k-a[i])){System.out.println("YES");return;}
            count.put(a[i],count.getOrDefault(a[i],0)+1);
        }
        System.out.println("NO");
    }
}