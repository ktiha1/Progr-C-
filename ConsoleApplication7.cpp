

#include <iostream>
using namespace std;
int main()
{
	double a, b, c, A, B, C, S, f,p,x1,x2,x3,y1,y2,y3;
	cin >> f;
	if (f == 1) {
		cin >> a;
		cin >> b;
		cin >> c;
		if ((c > 0) && (a > 0) && (b > 0)) {
			p = (a + b + c) / 2;
			S = sqrt(p * (p - a) * (p - b) * (p - c));
			cout << "S = " << S;
		}
		else {
			cout << "Incorrect";
		}
	}
	if (f == 2) {
		cin >> x1 >> y1;
		cin >> x2 >> y2;
		cin >> x3 >> y3;
		if ((x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1) == 0) {
			cout << "Incorrect";
		}
		else {
			A = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
			B = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
			C = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
			if ((A <= 0) || (B <= 0) || (C <= 0) ){
				cout << "Incorrect";
			}
			else {
				p = (A + B + C) / 2;
				S = sqrt(p * (p - A) * (p - B) * (p - C));
				cout << "S = " << S;
			}
			}
		}
	}


