/*Сыроватский Иван*/

#include <iostream>

int main()
{
	//допустим,что будем вводить числа до тех пор, пока не введём 0
	int k = 0;//кол-во чисел 
	int sum = 0;//сумма чисел
	float sr;//среднее арифм 
	int a;//вводимые числа
	do
	{
		std::cout << "Enter: ";
		std::cin >> a;
		if (a != 0 && a %10== 8)
		{
			++k;
			sum += a;
		}
	} while (a != 0);
	if (k != 0)
		sr = sum / static_cast<float>(k);
	std::cout << "Srednee arifm: " << sr << '\n';
	return 0;
}