#include <iostream>
using namespace std;

int a[5000000];
int n, k;

void swap(int x, int y) {
	int tmp = a[x];
	a[x] = a[y];
	a[y] = tmp;
}
int partition(int low, int high) {
	int mid = (low + high) / 2;
	swap(low, mid);
	int pivot = low, left = low, right = high;
	while (left < right) {
		while (a[pivot] < a[right])
			right--;
		while (left < right && a[pivot] >= a[left])
			left++;
		swap(left, right);
	}
	swap(left, pivot);
	return left;
}
void quick_sort(int low, int high) {
	if (low < high) {
		int pivot = partition(low, high);
		if (pivot + 1 == k)
			return;
		if (pivot + 1 < k)
			quick_sort(pivot + 1, high);
		else
			quick_sort(low, pivot - 1);	
	}
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) 
		scanf_s("%d", & a[i]);
	quick_sort(0, n - 1);
	cout << a[k - 1];
	return 0;
}