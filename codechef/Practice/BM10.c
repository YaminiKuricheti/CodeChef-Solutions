// Problem: BM10
// Platform: codechef
// Language: # Solution as follows

t = int(input())
for i in range(t):
    X, Y = map(int, input().split())
    prize_top10 = 10*X           
    #There was a logical error in this line. Rank 11 to 100 get Rupees Y each
    prize_11to100 = 90*Y        
    print(prize_top10+prize_11to100)
// Verdict: Accepted
// URL: https://www.codechef.com/learn/course/python-beginner-v2-p1/BP00BP05_V2/problems/BM10?tab=solution
// Solved on: 2026-10-31T16:00:56.706Z

# Solution as follows

t = int(input())
for i in range(t):
    X, Y = map(int, input().split())
    prize_top10 = 10*X           
    #There was a logical error in this line. Rank 11 to 100 get Rupees Y each
    prize_11to100 = 90*Y        
    print(prize_top10+prize_11to100) 