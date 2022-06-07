#include <iostream>

//本算法用于计算-100 至 100 的和

int main()
{
	int sum = 0;
	for (int i = -100; i <= 100; ++i)
		sum += i;

	std::cout << "Sum of -100 to 100 inclusive is " << sum << std::endl;

	return 0;
}