/*Реализовать функцию возведения числа a в степень b:
Без рекурсии. Сыроватский Иван*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(0, "");
	double a, b;
	cout << "Введите число: " << endl;
	cin >> a;
	cout << "Введите степень: " << endl;
	cin >> b;
	cout << "Ваш ответ = " << pow(a, b) << endl;

	return 0;
}
