// Problem: BM08
// Platform: codechef
// Language: # Solution as follows

#Always first check if the problem has test cases
t = int(input())            
#loop through each test case for its inputs
for i in range(t):          
    #Accept 2 integers inputs.
    A, B = map(int, input().split())     
    #Each burger needs 1 patty and 1 bun. Hence the minimum of these 2 is the maximum number of burgers which can be made
    Burgers = min(A,B)      
    #Print the desired output for each test case
    print(Burgers)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP08_V2/problems/BM08?tab=solution
// Solved on: 2026-10-31T16:03:44.661Z

# Solution as follows

#Always first check if the problem has test cases
t = int(input())            
#loop through each test case for its inputs
for i in range(t):          
    #Accept 2 integers inputs.
    A, B = map(int, input().split())     
    #Each burger needs 1 patty and 1 bun. Hence the minimum of these 2 is the maximum number of burgers which can be made
    Burgers = min(A,B)      
    #Print the desired output for each test case
    print(Burgers)                