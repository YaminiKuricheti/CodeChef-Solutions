// Problem: BM08E
// Platform: codechef
// Language: # Solution as follows

t = int(input())
for i in range(t):
    N, A = map(int, input().split())
    chef_chocolates = A
    chefina_chocolates = N - A
    diff = abs(chefina_chocolates - chef_chocolates)
    print(diff)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP08A_V2/problems/BM08E?tab=solution
// Solved on: 2026-10-31T16:03:12.516Z

# Solution as follows

t = int(input())
for i in range(t):
    N, A = map(int, input().split())
    chef_chocolates = A
    chefina_chocolates = N - A
    diff = abs(chefina_chocolates - chef_chocolates)
    print(diff)