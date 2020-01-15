#include <iostream>

using namespace std;

int main()
{
	int n, k, q = 0;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		if (a[i] > 0) {
			q++;
		}
	}

	if (q == 0)
		cout << " -1";
	else cout << q;


}
