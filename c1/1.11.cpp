#include <iostream>

int main()
{
	int a, b;
	std::cout << "Input two numbers" << std::endl;
	std::cin >> a >> b;
	while (a <= b){
		std::cout << a << std::endl;
		a++;
	}
}
