#include <iostream>
#include "Sales_item.h"

//��ȡ���ISBN��ͬ�����ݣ���������ǵĺ�

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