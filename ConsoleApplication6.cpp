// ConsoleApplication6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int x1,x2, a, b, c,D;
	cin >> a;
	cin >> b;
	cin >> c;
	D = b * b - 4 * a * c;
	if (D == 0) {
		x1 = -b / 2 * a;
		cout << x1;
	}
	if (D < 0) {
		cout << "Корней нет!";
	}
	if (D > 0) {
		x1 = (-b + sqrt(D)) / 2 * a;
		x2 = (-b - sqrt(D)) / 2 * a;
		cout << x1 << endl << x2;
	}
	return 0;
}


