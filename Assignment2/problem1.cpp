#include <bits/stdc++.h>
using namespace std;

int n;
long long K;
vector<long long> value;
vector<vector<int>> tree;

int answer = 0;
void dfs(int node, int parent, long long currentXor) {
    currentXor ^= value[node];
    if (currentXor >= K) {
        answer++;
    }
    for (int child : tree[node]) {
        if (child != parent) {
            dfs(child, node, currentXor);
        }
    }
}

int main() {
    cin >> n >> K;
    value.resize(n + 1);
    tree.resize(n + 1);

    for (int i = 1; i <= n; i++) {
        cin >> value[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    dfs(1, 0, 0);

    cout << answer << '\n';

    return 0;
}