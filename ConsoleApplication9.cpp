

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	int randomn;
	int n, x;
	//srand(time(NULL));
	randomn = rand() % 101;
	for (int i = 0; i < 5; i++)
	{

		cin >> n;
		if (n == randomn) {
			cout << "Поздравляю! Вы угадали" << endl;
			cout << "Хотите начать сначала? (1 - ДА )" << endl;
			cin >> x;
			if (x == 1) {
				i = -1;
				randomn = rand() % 101;
				continue;
			}
			else {
				
				break;
			}
		}
		if (n > randomn) {
			cout << "Загаданное число меньше" << endl;
			if (i == 4) {
				cout << "Вы проиграли. Было загадано:" << "" << randomn << endl;
				cout << "Хотите начать сначала? (1 - ДА )" << endl;
				cin >> x;
				if (x == 1) {
					i = -1;
					randomn = rand() % 101;
				}
				else {
					i = 5;
				}
			}
		}
		if (n < randomn) {
			cout << "Загаданное число больше" << endl;
			if (i == 4) {
				cout << "Вы проиграли. Было загадано:" << "" << randomn << endl;
				cout << "Хотите начать сначала? (1 - ДА )" << endl;
				cin >> x;
				if (x == 1) {
					i = -1;
					randomn = rand() % 101;
				}
				else {
					i = 5;
				}
			}
		}

	}
}

