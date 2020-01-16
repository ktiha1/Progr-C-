

#include <iostream>
#include <String>
using namespace std;

int main()
{
	string f;
	int a, b;
	cin >> a >> f >> b;
	if (f == "+") {
		cout << a + b;
	}
	if (f == "-") {
		cout << a - b;
	}
	if (f == "*") {
		cout << a * b;
	}
	if ((f == "/") && (b !=0)) {
		cout << a / b;
	}
	if ((f == "/") && (b == 0)) {
		cout << "Incorrect";
	}
}
