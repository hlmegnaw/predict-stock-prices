# Data Structures in Our Stock Analysis System

How We Store and Process Data

1. Storing Price History
We use a **vector<int>** to store all the stock prices because:
- It lets us easily add new daily prices as they come in
- We can quickly access any day's price using index positions
- The contiguous memory helps with cache efficiency during analysis

2. Tracking Analysis History
We chose a **vector<string>** to record all analysis operations because:
- It maintains chronological order of analyses
- We can efficiently add new entries at the end
- Easy to display full history when needed

3. Finding Price Relationships
We implemented a **distance matrix (vector<vector<int>>)** for price correlation because:
- The 2D structure naturally represents day-to-day relationships
- We  apply Floyd-Warshall algorithm directly
- Modifying values during analysis is straightforward

#How We Analyze Trends

 4. Trend Detection
We build a **graph using map<int, vector<int>>** for trend analysis because:
- Each day maps to its following days
- The adjacency list format saves space for sparse connections
- It works perfectly with our BFS traversal

We paired this with a **queue<pair<int,int>>** because:
- BFS needs FIFO processing of (day, streak) pairs
- Queues handle this perfectly without recursion
- We can easily extend trends day by day

 5. Portfolio Optimization
We designed a **3-state graph (vector<vector<int>>)** because:
- It cleanly represents Buy/Hold/Sell states
- The adjacency matrix shows allowed transitions
- We can apply dynamic programming directly

# Why These Choices Work Best

# Memory Efficiency
*We balanced* memory usage by:
- Using vectors for their compact storage
- Only storing necessary relationships
- Clearing unused data between analyses

# Speed Considerations
We optimized performance by:
- Choosing O(1) access vectors for core data
- Using queues for O(1) enqueue/dequeue in BFS
- Selecting maps for O(log n) lookups when needed

# Future Extensibility
We structured the system to allow:
- Easy addition of new analysis methods
- Simple modification of existing algorithms
- Straightforward data input/output

