

#include <iostream>
using namespace std;
int main()
{
	double n, a,s=1;
	cin >> a;
	cin >> n;
	if (n > 0) {
		for (int i = 0; i < n; i++) {
			s = s * a;
		}
	}
	else {
		for (int i = 0; i > n; i--) {
			s = s * a;
		}
		s = 1 / s;
	}
	cout << s;
}
