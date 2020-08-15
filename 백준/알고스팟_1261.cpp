#include <iostream>
#include <queue>
using namespace std;

int n, m;
int a[100][100],d[100][100];
int dx[4] = { -1,1,0,0 }, dy[4] = { 0,0,-1,1 };

typedef struct {
	int x, y, cnt;
}st;
void dijkstra() {
	queue<st> q;
	q.push({ 0,0,0 });

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			d[i][j] = 20000;

	d[0][0] = 0;

	while (!q.empty()) {
		int x = q.front().x, y = q.front().y, cnt = q.front().cnt;
		q.pop();
		if (d[x][y] > cnt)
			continue;
		for (int k = 0; k < 4; k++) {
			int nx = x + dx[k], ny = y + dy[k];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (d[nx][ny] > cnt + a[nx][ny]) {
				d[nx][ny] = cnt + a[nx][ny];
				q.push({ nx,ny,d[nx][ny] });
			}

		}


	}

}
int main() {
	cin >> m >> n;
	char tmp;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> tmp;
			a[i][j] = tmp - '0';
		}
	}
	dijkstra();
	cout << d[n - 1][m - 1];
	return 0;
}

