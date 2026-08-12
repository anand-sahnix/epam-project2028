#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> points(n);

    for (int i = 0; i < n; i++) {
        cin >> points[i];
    }

    if (n == 1) {
        cout << points[0] << endl;
        return 0;
    }

    vector<int> dp(n);

    dp[0] = points[0];
    dp[1] = max(points[0], points[1]);

    for (int i = 2; i < n; i++) {
        dp[i] = max(dp[i - 1],
                    points[i] + dp[i - 2]);
    }

    cout << dp[n - 1] << endl;

    return 0;
}