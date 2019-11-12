/*Реализовать функцию перевода чисел из десятичной системы в двоичную, используя рекурсию.
Сыроватский Иван*/

#include <iostream>

using namespace std;

void decToBin(int n) {
	if (n < 0) {
		cout << "-";
		decToBin(-n);
	}
	else if (n < 2) {
		cout << n;
		return;
	}
	else {
		decToBin(n / 2);
		int res = n % 2;
		cout << res;
	}
}

int main() {
	int n;
	cout << "enter number  :\n";
	cout << "n = ";
	cin >> n;
	cout << "binary code:\n";
	decToBin(n);
	return 0;
}