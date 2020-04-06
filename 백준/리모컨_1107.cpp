#include <iostream>
#include <algorithm>
using namespace std;

int N,M, ans = 1000000;
bool remote[10];

void solve(int value) {
	if (value == 0) {
		if (remote[value])
			return;	
		ans = min(ans, N + 1);
		return;
	}
	int cnt = 0, v = value;
	while (v > 0) {
		if (remote[v % 10])
			return;
		cnt++;
		v /= 10;
	}
	ans = min(ans, abs(N - value) + cnt);
}

int main() {
	cin >> N;
	cin >> M;
	if (M > 0) {
		int tmp;
		for (int i = 0; i < M; i++) {
			scanf("%d", &tmp);
			remote[tmp] = true;
		}
	}
	if (M == 10) {
		printf("%d",abs(100 - N));
	}
	else {
		for (int i = 0; i <= 1000000; i++)
			solve(i);
		ans =min(abs(100 - N), ans);
		printf("%d",ans);
	}
	return 0;
}
