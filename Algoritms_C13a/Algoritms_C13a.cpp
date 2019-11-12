/*Сыроватский Иван*/

#include <iostream>
#include <cstdlib> // для функций rand() и srand()

int main()
{
	srand(0); // устанавливаем стартовое значение - 0

	// Выводим 1 случайных чисел
	for (int count = 0; count < 1; ++count)
	{
		std::cout << rand() << "\t";

	}
}