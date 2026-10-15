// Problem: FANLA
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
        int n=nextInt();Map<Integer,Integer> last=new HashMap<>();long answer=0;
        for(int i=0;i<n;++i){
            int x=nextInt();Integer old=last.put(x,i);
            if(old!=null)answer+=i-old;
        }
        System.out.println(answer);
    }
}
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/hashing/HASH04/problems/FANLA?tab=solution
// Solved on: 2026-10-15T16:48:26.276Z

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
        int n=nextInt();Map<Integer,Integer> last=new HashMap<>();long answer=0;
        for(int i=0;i<n;++i){
            int x=nextInt();Integer old=last.put(x,i);
            if(old!=null)answer+=i-old;
        }
        System.out.println(answer);
    }
}