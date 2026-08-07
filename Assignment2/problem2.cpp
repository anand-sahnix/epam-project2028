/*
Problem 2: Emergency Route Validation
A country's transportation department models its highway system as a connected undirected graph. Each city is represented by a vertex, while highways are represented by edges. During emergencies, rescue teams need to travel from the capital city (City 1) to all other cities. However, not every city is considered safely reachable because some routes may contain too many intermediate cities.

A city is called efficiently reachable if the length of the shortest path from City 1 to that city is less than or equal to D roads. Determine the total number of efficiently reachable cities, including the capital. Unreachable cities are not counted.
Input Format
First line: N M D
Next M lines: u v (roads)
Output Format
Print the number of efficiently reachable cities.
Constraints
1 ≤ N ≤ 10^5
0 ≤ M ≤ 2×10^5
0 ≤ D ≤ N
No self-loops
Sample Input
7 8 2
1 2
1 3
2 4
2 5
3 6
6 7
5 7
4 6
Sample Output
6
Explanation
Run BFS from City 1 to compute the shortest distance to every city. Count cities whose distance is at most D.
Example
Input:
6 5 1
1 2
2 3
1 4
4 5
5 6

Output:
3

*/