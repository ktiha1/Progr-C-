#include <iostream>
#include <ctime>
using namespace std;
int main(){
    int array[20] = {};
    int min = 100, max = -100;
    srand(time(NULL)); // сид для генерации задаем текущим верменем
    for (int &num: array){
        num = rand() % 201 - 100; // получаем числа в [0 - 100; 200 - 100]
        if (min > num) min = num;
        if (max < num) max = num;
        cout << num << ' ';
    }
    cout << endl << min << ' ' << max << endl;
    return 0;
}
int main (){
    double w,h;

    cin >> w >> h;

    printBMI(BMI(w,h/100));

    return 0;
}