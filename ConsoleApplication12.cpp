

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int n, k = 0;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		if ((n / i > 1) && (n % i == 0)) {
			k = k + 1;

		}
	}
	if (k > 1) {
		cout << "Составное";
	}
	else {
		cout << "Простое";
	}
}

