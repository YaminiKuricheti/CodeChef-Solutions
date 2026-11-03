// Problem: CS01AB
// Platform: codechef
// Language: # Solution as follows

t = int(input())
for i in range(t):
    N, A, B = map(int, input().split())
    if N%A == 0 and N%B == 0:
        print('N is divisible by A and B')
    elif N%A == 0:
        print('N is divisible by only A')
    elif N%B == 0:
        print('N is divisible by only B')
    # The last statement could have been an 'else' statement
    # elif condition used to show usage of 'and' statement
    elif N%A != 0 and N%B != 0:
        print('N is divisible by neither A nor B')
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP10_V2/problems/CS01AB?tab=solution
// Solved on: 2026-11-03T15:06:51.479Z

# Solution as follows

t = int(input())
for i in range(t):
    N, A, B = map(int, input().split())
    if N%A == 0 and N%B == 0:
        print('N is divisible by A and B')
    elif N%A == 0:
        print('N is divisible by only A')
    elif N%B == 0:
        print('N is divisible by only B')
    # The last statement could have been an 'else' statement
    # elif condition used to show usage of 'and' statement
    elif N%A != 0 and N%B != 0:
        print('N is divisible by neither A nor B')