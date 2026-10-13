// Problem: TKFR
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
        int n=nextInt();int[] f=new int[101];
        for(int i=0;i<n;++i)++f[nextInt()];
        int k=nextInt();List<Integer> vals=new ArrayList<>();
        for(int x=1;x<=100;++x)if(f[x]>0)vals.add(x);
        vals.sort((a,b)->f[a]!=f[b]?Integer.compare(f[b],f[a]):Integer.compare(b,a));
        StringBuilder out=new StringBuilder();
        for(int i=0;i<k;++i){if(i>0)out.append(' ');out.append(vals.get(i));}
        System.out.println(out);
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/hashing/HASH04/problems/TKFR?tab=solution
// Solved on: 2026-10-13T16:52:58.747Z

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
        int n=nextInt();int[] f=new int[101];
        for(int i=0;i<n;++i)++f[nextInt()];
        int k=nextInt();List<Integer> vals=new ArrayList<>();
        for(int x=1;x<=100;++x)if(f[x]>0)vals.add(x);
        vals.sort((a,b)->f[a]!=f[b]?Integer.compare(f[b],f[a]):Integer.compare(b,a));
        StringBuilder out=new StringBuilder();
        for(int i=0;i<k;++i){if(i>0)out.append(' ');out.append(vals.get(i));}
        System.out.println(out);
    }
}