// Problem: BM02
// Platform: codechef
// Language: a = 10 // 5
print(a)

# Output
# 2
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP06_V2/problems/BM02?tab=solution
// Solved on: 2026-10-31T16:01:12.685Z

t = int(input())
for i in range(t):
    a, b = map(int, input().split())     
    diff = a - b
    division = a // b
    
    print(diff, division)
