

#include <iostream>
using namespace std;

int main()
{
	int n, k =2;
	cin >> n;
	if (n > 1) {
		while (n / 2 >=2) {
			k = k + 1;
			n=n/2;
		}
		cout << k;
	}
	else if (n == 0) {
		cout << "0";
	}
	else if (n == 1) {
		cout << "1";
	}

}