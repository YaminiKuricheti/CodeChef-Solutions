// Problem: BOOKCHEF
// Platform: codechef
// Language: struct
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/sorting-new/SORTING02/problems/BOOKCHEF?tab=solution
// Solved on: 2026-10-24T07:49:27.903Z

import java.util.*;

class Post {
    int f;      // friend ID
    int p;      // priority
    String s;   // post message

    public Post(int f, int p, String s) {
        this.f = f;
        this.p = p;
        this.s = s;
    }
}

public class Main{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Reading N and M
        int N = sc.nextInt();
        int M = sc.nextInt();
        
        // Set to store special friends
        Set<Integer> specialFriends = new HashSet<>();
        for (int i = 0; i < N; i++) {
            specialFriends.add(sc.nextInt());
        }

        // List to store posts
        List<Post> posts = new ArrayList<>();
        for (int i = 0; i < M; i++) {
            int f = sc.nextInt();
            int p = sc.nextInt();
            String s = sc.next();  // Reading the string message
            posts.add(new Post(f, p, s));
        }

        // Sorting posts
        posts.sort((a, b) -> {
            boolean isSpecialA = specialFriends.contains(a.f);
            boolean isSpecialB = specialFriends.contains(b.f);

            // Prioritize special friends, then by post priority
            if (isSpecialA != isSpecialB) {
                return isSpecialB ? 1 : -1;
            } else {
                return Integer.compare(b.p, a.p);  // Descending order of priority
            }
        });

        // Printing sorted post messages
        for (Post post : posts) {
            System.out.println(post.s);
        }

        sc.close();
    }
}
