#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long N, a, b;
	int K, Q;

	scanf("%lld %d %d", &N, &K, &Q);
	for (int i = 0; i < Q; i++) {
		scanf("%lld %lld", &a, &b);
		long long dis = 0;
		if (K == 1)
			dis = abs(a - b);
		else {
			long long a_parent = a, b_parent = b;
			while (a_parent != b_parent) {
				if (a_parent > b_parent)
					a_parent = (a_parent + K - 2) / K;
				else
					b_parent = (b_parent + K - 2) / K;
				dis++;
			}
		}
		printf("%lld\n",dis);
	}
	return 0;
}
