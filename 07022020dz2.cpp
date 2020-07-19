/*
Задание 2: Подсчитать количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные
*/
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int n, c1, c2, c3, k = 0;
	for (int i = 100; i <= 999; i++)
	{
		c1 = i / 100;
		c2 = (i % 100) / 10;
		c3 = i % 10;
		if (c1 != c2 && c1 != c3 && c2 != c3) k++;
	}
	cout << "Количество целых чисел в диапазоне от 100 до 999, у которых все цифры разные: " << k << endl;
	return 0;
}
