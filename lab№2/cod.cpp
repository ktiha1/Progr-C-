#include <cmath>
#include <iostream>
using namespace std;
int main()
{
	double a, b, x, z, x1, x2, d,max,min;
	cin >> a >> b >> x1 >> x2 >> d;
	x = x1;
	max = x;
	min = x;
	
	for (double i = x1; i <= x2+d; i = i + d) {
		
		if (i <= a+d) {
			x = abs(i) + sin(i);
			cout << x << endl;
		}
		if ((i > a+d) && (i < b)) {
			x = log(abs(i)) / log(3.0);
			cout << x << endl;
		}
		if (i >= b) {
			x = tan(i);
			cout << x << endl;
		}
		if (max < x) {
			max = x;
		}
		if (min > x) {
			min = x;
		}
	}
	cout << "max=" << max << " " << "min=" << min;
}