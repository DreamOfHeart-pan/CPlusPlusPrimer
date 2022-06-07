#include <iostream>

//重写打印范围函数(1.11)，处理两个数大小不定情形

int main()
{
	int v1 = 0, v2 = 0;

	std::cout << "Enter two numbers:" << std::endl;
	std::cin >> v1 >> v2;

	if (v1 > v2)
	{
		int temp = v1;
		v1 = v2;
		v2 = temp;
	}

	for (int i = v1; i <= v2; i++)
	{
		std::cout << i << std::endl;
	}

	return 0;
}