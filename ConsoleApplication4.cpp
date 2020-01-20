

#include <iostream>
using namespace std;
int main()
{
	int a, b,c;
	cin >> a >> b;
	c = b;
	b = a;
	a = c;

		cout << a << " " << b<<endl;
		cin >> a >> b;
		b = a + b;
		a = b - a;
		b = b - a;
		cout << a << " " << b;
}

