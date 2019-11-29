//Реализовать простейшую хэш-функцию. На вход функции подается строка, на выходе получается сумма кодов символов.
//Сыроватский Иван

#include <iostream>
#include <string>

std::string Encode(const std::string& s)
{
	std::string res(s);
	for (auto& c : res)
		c++;
	return res;
}

int main()
{
	const std::string str = "Ehal Greka cherez reku", str_encoded = Encode(str);
	std::cout << str << "\nEncode:\n" << str_encoded;
}