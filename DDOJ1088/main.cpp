#include <bits/stdc++.h>

using namespace std;

const int maxn = 5000 + 131;

char str[maxn];

int countSubstrings(string s) {
    int n = s.length();
    if (n==0) {
        return 0;
    }
    int ans = 0;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int i = n - 1; i >= 0;i--) {
        for (int j = i; j < n;j++) {
            dp[i][j] = ((s[i] == s[j]) && (j - i < 3 || dp[i + 1][j - 1]));
            if (dp[i][j]) {
                ans++;
            }
        }
    }
	return ans;
}

int main() {
    string str;
    while(cin >> str) {
        cout << countSubstrings(str) <<endl;
    }
}
