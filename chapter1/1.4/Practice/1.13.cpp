#include<iostream>

//使用 for 重做 1.9 - 1.11 

//1.9 求 50 - 100 的和
void sum_50_100()
{
	int sum = 0;
	for (int i = 50; i <= 100; ++i)
	{
		sum += i;
	}
	std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
}

//1.10 打印 10 - 0
void print()
{
	for (int i = 10; i >= 0; --i)
	{
		std::cout << i << std::endl;
	}
}

//1.11 打印范围
void Print()
{
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	for (int i = v1; i <= v2; ++i)
	{
		std::cout << i << std::endl;
	}
}


int main()
{
	std::cout << "----1.9----" << std::endl;
	sum_50_100();
	std::cout << "----1.10----" << std::endl;
	print();
	std::cout << "----1.11----" << std::endl;
	Print();

	return 0;
}