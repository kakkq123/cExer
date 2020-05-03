#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001][1001] = { 0, };
int main() {
	string a, b;
	cin >> a >> b;
	
	for (int i = 1; i <= a.length(); i++) {
		char _a = a.at(i - 1);
		for (int j = 1; j <= b.length(); j++) {
			char _b = b.at(j- 1);
			if (_a == _b)
				dp[i][j] = dp[i - 1][j - 1] + 1;
			else
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
		}
	}

	cout << dp[a.length()][b.length()] << endl;
	return 0;
}
