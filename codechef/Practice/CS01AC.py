// Problem: CS01AC
// Platform: codechef
// Language: # Solution as follows

t = int(input())
for i in range(t):
    A, B = map(int, input().split())
    if A != B and (A%2 != 0 and B%2 != 0):
        print("A and B are different and are odd")
    elif A != B and (A%2 == 0 and B%2 == 0):
        print("A and B are different and are even")
    else:
        print("Doesn't matter")
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP10_V2/problems/CS01AC?tab=solution
// Solved on: 2026-11-03T15:07:09.423Z

# Solution as follows

t = int(input())
for i in range(t):
    A, B = map(int, input().split())
    if A != B and (A%2 != 0 and B%2 != 0):
        print("A and B are different and are odd")
    elif A != B and (A%2 == 0 and B%2 == 0):
        print("A and B are different and are even")
    else:
        print("Doesn't matter")