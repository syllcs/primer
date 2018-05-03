#include <iostream>

int main()
{
	int i = 42;
	i++;
	const int &r1 = i;
	const int &r2 = 42;
	const int &r3 = 43;
	i++;
	const int &r4 = r1 + 2;
	i++;
	//int &r5 = r1 + 2;
	std::cout << i << r1 << r4 <<std::endl;
}
