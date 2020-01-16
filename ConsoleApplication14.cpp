

#include <iostream>
using namespace std;
int main()
{
	int s, l1, r1, l2, r2, k;
	int n = 0;
	cin >> s >> l1 >> r1 >> l2 >> r2;
	for (int i = l1; i <= r1; i++) {
		for (int c = l2; c <= r2; c++) {
			k = i + c;
			if (k == s) {
				n = 1;
				cout << i << c;
				break;

			
		}
			
		
		}
		if (k == s) {
			
			break;

		}

	}
	if (n == 0) {
		cout << -1;
}
}

