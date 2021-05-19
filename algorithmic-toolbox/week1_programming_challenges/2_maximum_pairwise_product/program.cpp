#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, i;
	int max1, max2;
	int index1, index2;
	long long p;
	cin >> n;
	vector<int> v(n);
	for (i = 0; i < n; i++) {
		cin >> v[i];
	}
	// Find the first largest value
	for (i = 0, max1 = v[0], index1 = 0; i < n; i++) {
		if (v[i] > max1) {
			max1 = v[i];
			index1 = i;
		}
	}
	// Find the second largest value (can be the same with the first one)
	for (i = 0, max2 = v[0], index2 = 0; i < n; i++) {
		if (v[i] > max2 && i != index1) {
			max2 = v[i];
			index2 = i;
		}
	}
	p = max1 * max2;
	cout << p << endl;
	return 0;
}

