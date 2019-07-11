#include <stdio.h>
#pragma warning (disable:4996)

static int dp[41][2];

int fibo_0(int n) {
	if (n == 0)
		return dp[n][0] = 1;
	else if (n == 1)
		return dp[n][0] = 0;
	//중복 계산을 방지
	if (dp[n][0] != 0)
		return dp[n][0];
	return dp[n][0] = fibo_0(n - 1) + fibo_0(n - 2);
}


int fibo_1(int n) {
	if (n == 0)
		return dp[n][1] = 0;
	else if (n == 1)
		return dp[n][1] = 1;
	//중복 계산을 방지
	if (dp[n][1] != 0)
		return dp[n][1];
	return dp[n][1] = fibo_1(n - 1) + fibo_1(n - 2);
}
int main() {
	int n[41];
	int t;
	scanf("%d", &t);

	for (int i = 0; i < t; i++) {
		scanf("%d", &n[i]);
		fibo_0(n[i]);
		fibo_1(n[i]);
	}

	for (int i = 0; i < t; i++)
		printf("%d %d\n", dp[n[i]][0], dp[n[i]][1]);

	return 0;
}