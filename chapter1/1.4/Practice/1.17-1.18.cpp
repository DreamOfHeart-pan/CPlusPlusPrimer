#include <iostream>

//如果所有数字均重复，则只会输出一行，其次数为数字个数
//如果所有数字均不重复，会输出n行，每个数字均出现一次，n为数字个数

int main()
{
	int val = 0, currVal = 00;
	if (std::cin >> currVal)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (currVal == val)
			{
				++cnt;
			}
			else
			{
				std::cout << currVal << " occurs " << cnt << " times" << std::endl;
				currVal = val;
				cnt = 1;
			}
		}
		std::cout << currVal << " occurs " << cnt << " times" << std::endl;
	}
	return 0;
}