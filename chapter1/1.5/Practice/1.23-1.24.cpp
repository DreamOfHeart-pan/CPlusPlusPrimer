#include <iostream>
#include "Sales_item.h"

//��ȡ�������ۼ�¼����ͳ��ÿ��ISBN�м������ۼ�¼

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
