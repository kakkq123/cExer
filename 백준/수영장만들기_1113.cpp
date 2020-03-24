#include <iostream>
#include <queue>
using namespace std;

int N, M;
int a[50][50];
int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, 1, 0, -1 };

int bfs(int r, int c, int h) {
	queue<pair<int, int>> q;
	queue<pair<int, int>> s;
	q.push(pair<int, int>(r, c)); 
	s.push(pair<int, int>(r, c)); // 이동 루트 저장

	int cnt = 1;
	a[r][c]++;

	while (!q.empty()) {
		int x = q.front().first, y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i], ny = y + dy[i];
			//테두리 넘어가거나, 채우려는 물 높이보다 낮은 곳으로 이동할 경우 물을 채울 수 없으므로 return 0
			if (nx < 0 || nx >= N || ny < 0 || ny >= M || a[nx][ny] < h) {
				//이동하면서 +1 해줬던 수영장 -2를 해줌 -->> 어차피 물을 채울 수 없으니 다음에 검사할 때 중복검사하지 못하도록 h보다 -1낮게 해줘야함
				while (!s.empty()) {
					int sx = s.front().first, sy = s.front().second;
					s.pop();
					a[sx][sy] -= 2; //**** -1 해주는 것보다 훨 빠름!!!! ((((중복 계산을 방지해주기 때문에))))
				}
				return 0;
			}
			//물 높이와 같다면 + 1
			if (a[nx][ny] == h) {
				q.push(pair<int, int>(nx, ny));
				s.push(pair<int, int>(nx, ny));
				a[nx][ny]++; // 수영장 물을 채우면서 visit 기능도 해줌
				cnt++;
			}
		}
	}
	return cnt;
}

int main() {
	cin >> N >> M;
	char tmp;
	int cnt = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++) {
			cin >> tmp;
			a[i][j] = tmp - '0';
		}

	//bfs 돌면서 물을 채울 수 있는 양을 계산한다.
	for (int h = 1; h < 9; h++)
		for (int r = 1; r < N - 1; r++)
			for (int c = 1; c < M - 1; c++)
				if (a[r][c] == h)
					cnt += bfs(r, c, h);

	cout << cnt;
	return 0;
}
