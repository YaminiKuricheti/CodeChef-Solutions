// Problem: MISNUMM
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
        int n=nextInt();int[] f=new int[10001];
        for(int i=0;i<n;++i)--f[nextInt()];
        int m=nextInt();for(int i=0;i<m;++i)++f[nextInt()];
        StringBuilder out=new StringBuilder();
        for(int x=1;x<=10000;++x)if(f[x]>0){if(out.length()>0)out.append(' ');out.append(x);}
        System.out.println(out.length()==0?"-1":out.toString());
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/hashing/HASH04/problems/MISNUMM?tab=solution
// Solved on: 2026-10-14T15:45:25.215Z

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
        int n=nextInt();int[] f=new int[10001];
        for(int i=0;i<n;++i)--f[nextInt()];
        int m=nextInt();for(int i=0;i<m;++i)++f[nextInt()];
        StringBuilder out=new StringBuilder();
        for(int x=1;x<=10000;++x)if(f[x]>0){if(out.length()>0)out.append(' ');out.append(x);}
        System.out.println(out.length()==0?"-1":out.toString());
    }
}