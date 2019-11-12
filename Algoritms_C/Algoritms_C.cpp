/*Сыроватский Иван*/

#include <iostream>
#include <array>


class random {
	std::array <uint32_t, 64>   m_table;
	int                         m_i;

public:
	random() {
		m_table[0] = 123456789;
		m_table[1] = 987654321;
		for (int j = 0; j < 62; j++)
			m_table[j + 2] = m_table[j + 1] * 11 + m_table[j] * 23 / 16;
		m_i = 0;
	}

	uint32_t operator ()() {
		return ++m_i, m_table[m_i & 63] = m_table[m_i - 24 & 63] ^ m_table[m_i - 55 & 63];
	}
};

int main() {
	random rnd;
	for (int i = 0; i < 1; i++)
		std::cout << rnd() % 100 << std::endl;
}
