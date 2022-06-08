#include <iostream>
#include "Sales_item.h"

//读取多条销售记录，并统计每隔ISBN有几条销售记录

int main()
{
	Sales_item total;
	if (std::cin >> total)
	{
		int cnt = 1;
		Sales_item temp;
		while (std::cin >> temp)
		{
			if (temp.isbn() == total.isbn())
			{
				++cnt;
			}
			else
			{
				std::cout << total.isbn() << " " << cnt << std::endl;
				total = temp;
				cnt = 1;
			}
		}
		std::cout << total.isbn() << " " << cnt << std::endl;
	}
	return 0;
}
