// ConsoleApplication3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	cout << a + b << " " << a - b << " " << a / b << " " << a * b<<endl;
	double a1, b1;
	cin >> a1 >> b1;
	cout << a1 + b1 << " " << a1 - b1 << " " << a1 / b1 << " " << a1 * b1 << endl;
	double a2, c, c1, c2, c3;
	int b2;
	cin >> a2 >> b2;
	c = a2 + b2;
	c1 = a2- b2;
	c2 = a2 / b2;
	c3 = a2 * b2;
	cout << c << " " << c1 << " " << c2 << " " << c3 << endl;
	double b3, cx, cx1, cx2, cx3;
	int a3;
	cin >> a3 >> b3;
	cx = a3 + b3;
	cx1 = a3 - b3;
	cx2 = a3 / b3;
	cx3 = a3 * b3;
	cout << cx << " " << cx1 << " " << cx2 << " " << cx3 << endl;
	return 0;
}


