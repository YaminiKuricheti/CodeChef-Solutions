// Problem: CS11A
// Platform: codechef
// Language: # Solution as follows

t=int(input())
for i in range(t):
    A, B, C = map(int,input().split())
    total_score = A + B + C
    minimum_score = min(A,B,C)
    #Equality not checked for
    if total_score>=100 and minimum_score>=10: 
        #Yeah - we all make these mistakes. Printed 'Yes' instead of 'Pass' as expected
        print('PASS')           
    else:
        print('FAIL')
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP10_V2/problems/CS11A?tab=solution
// Solved on: 2026-11-03T15:08:02.237Z

# Solution as follows

t=int(input())
for i in range(t):
    A, B, C = map(int,input().split())
    total_score = A + B + C
    minimum_score = min(A,B,C)
    #Equality not checked for
    if total_score>=100 and minimum_score>=10: 
        #Yeah - we all make these mistakes. Printed 'Yes' instead of 'Pass' as expected
        print('PASS')           
    else:
        print('FAIL')