// Попробовать оптимизировать пузырьковую сортировку.
// Сравнить количество операций сравнения оптимизированной и не оптимизированной программы. 
// Написать функции сортировки, которые возвращают количество операций.
//Сыроватский Иван
//


#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "rus");

	int digitals[10]; // объявили массив на 10 ячеек

	cout << "Введите 10 чисел для заполнения массива: " << endl;

	for (int i = 0; i < 10; i++) {
		cin >> digitals[i]; 
	}

	for (int i = 0; i < 10; i++) {
		bool flag = true;
		for (int j = 0; j < 10 - (i + 1); j++) {
			if (digitals[j] > digitals[j + 1]) {
				flag = false;
				swap(digitals[j], digitals[j + 1]);
			}
		}
		if (flag) {
			break;
		}
	}

	cout << "Массив в отсортированном виде: ";

	for (int i = 0; i < 10; i++) {
		cout << digitals[i] << " "; // выводим элементы массива
	}
	system("pause");
	return 0;
}