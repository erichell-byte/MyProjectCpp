// cpp07ex00.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "whatever.hpp"

int main()
{
	//int a = 5;
	//int b = 6;
	//float g = 3.32423f;
	//float k = 32.32234f;
	//char l = 's';
	//char p = 'k';

	//int num1 = min(a, b);
	//std::cout << num1 << std::endl;
	//int num2 = max(a, b);
	//std::cout << num2 << std::endl;
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;
	//swap(a, b);
	//std::cout << a << std::endl;
	//std::cout << b << std::endl;

	///* -------------------- - */
	//float f1 = min(g, k);
	//std::cout << f1 << std::endl;
	//float f2 = max(g, k);
	//std::cout << f2 << std::endl;

	//std::cout << g << std::endl;
	//std::cout << k << std::endl;
	//swap(g, k);
	//std::cout << g << std::endl;
	//std::cout << k << std::endl;

	//char c1 = min(l, p);
	//std::cout << c1 << std::endl;
	//char c2 = max(l, p);
	//std::cout << c2 << std::endl;

	///* -------------------- - */
	//std::cout << l << std::endl;
	//std::cout << p << std::endl;
	//swap(l, p);
	//std::cout << l << std::endl;
	//std::cout << p << std::endl;

	std::cout << std::endl;
	std::cout << std::endl;

	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;


}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
