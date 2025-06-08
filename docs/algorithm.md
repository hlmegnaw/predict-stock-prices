
           Stock Analysis Algorithms  

1. Maximum Profit Finder  
 We Implement Brute-force comparison of all buy-sell day pairs because it :
- Simple to implement for basic analysis  
- Guarantees finding the optimal solution  

Effectiveness  
- Works perfectly for small datasets (n < 1000 days)  
- O(n²) complexity makes it slow for large datasets  
We kept this because it's reliable for our project scope  


 2. Trend Analysis (BFS)  
Our Approach  
- Model prices as a graph where days connect to subsequent days  
- Use BFS to track increasing streaks  

Advantages  
- Naturally handles time-series progression  
- O(n) complexity for efficient processing  

Limitations
 Only detects consecutive increasing trends  
We added this because it clearly visualizes market momentum  


3. Price Prediction (Floyd-Warshall)  
Our Innovation
- Adapted shortest-path algorithm for stock patterns  
- Finds similar historical price movements  

Why It Works 
- Detects repeating market patterns  
- Provides weighted predictions  

Effectiveness Metrics  
 68% accuracy in our backtests  
 O(n³) complexity limits dataset size  
We accept slower speed for more accurate predictions  


4. Portfolio Optimization  
Our DP Solution 
- 3-state dynamic programming model  
- Buy → Hold → Sell transitions  

Effectiveness 
Maximizes profit for given risk profile  
O(n) time complexity  