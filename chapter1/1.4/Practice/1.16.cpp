#include <iostream>

//从cin 读入一组数，输出其和

int main()
{
	int value = 0, sum = 0;
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is " << sum << std::endl;
	return 0;
}