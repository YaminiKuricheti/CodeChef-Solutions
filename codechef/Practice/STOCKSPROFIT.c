// Problem: STOCKSPROFIT
// Platform: codechef
// Language: public static int findMaxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // update minimum seen so far
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // update max profit
            }
        }
        return maxProfit;
    }
// Verdict: Accepted
// URL: https://www.codechef.com/practice/course/arrays/ARRAYSPRO/problems/STOCKSPROFIT?tab=solution
// Solved on: 2026-10-23T16:37:36.161Z

 public static int findMaxProfit(int[] prices) {
        int minPrice = Integer.MAX_VALUE;
        int maxProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                minPrice = price; // update minimum seen so far
            } else if (price - minPrice > maxProfit) {
                maxProfit = price - minPrice; // update max profit
            }
        }
        return maxProfit;
    }