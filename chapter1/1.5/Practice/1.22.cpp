#include <iostream>
#include "Sales_item.h"

//读取多个ISBN相同的数据，并输出它们的和

int main()
{
	Sales_item total;
	if (std::cin >> total)
	{
		Sales_item temp;
		while (std::cin >> temp)
		{
			total += temp;
		}
		std::cout << total << std::endl;
	}

	return 0;
}