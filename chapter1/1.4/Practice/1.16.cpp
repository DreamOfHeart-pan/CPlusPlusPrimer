#include <iostream>

//��cin ����һ������������

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