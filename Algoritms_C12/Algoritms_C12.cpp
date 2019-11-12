/*Сыроватский Иван*/
#include <iostream>
using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "");
	int a, b, c;

	cout << "Введите 3 числа через пробел: ";
	cin >> a >> b >> c;

	int min = a;
	int max = a;

	// Нахождениа минимума
	if (b < min) {
		min = b;
	}
	if (c < min) {
		min = c;
	}

	// Нахождение максимума
	if (b > max) {
		max = b;
	}
	if (c > max) {
		max = c;
	}

	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;

	return 0;
}