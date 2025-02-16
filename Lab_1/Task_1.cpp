/* Выполнить программу модификацию программы, вычисления степени */
#include <iostream>
#include <cmath>

void Task_1(){
	setlocale(LC_ALL, "RU");
	int base;
	std::cout << "Введите основание для возведения в степень: ";
	std::cin >> base;

	int power(int base, int degree);

	for (int exponent = 0; exponent < 10; exponent++) {

		int result = pow(base, exponent);
		std::cout << base << "^" << exponent << " = " << result << std::endl;

	}
}