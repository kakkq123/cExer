#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>
int min(int a, int b) {
	if (a > b)
		return b;
	return a;
}
int main() {
	int n;
	scanf("%d", &n);
	int dp[10000];
	dp[0] = dp[1] = 0;

	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		else if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
	}

	printf("%d", dp[n]);
	return 0;
}