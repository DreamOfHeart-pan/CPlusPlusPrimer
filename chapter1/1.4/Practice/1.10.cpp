#include <iostream>

/*
* 使用 -- 和 while 递减打印 10 到 0
*/

int main()
{
	int num = 10;
	while (num >= 0)
	{
		std::cout << num << std::endl;
		--num;
	}
	return 0;
}