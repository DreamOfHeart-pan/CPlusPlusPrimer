#include <iostream>
#include "Sales_item.h"

//读取一组销售记录并打印
int main()
{
	Sales_item item;
	while (std::cin >> item)
	{
		std::cout << item << std::endl;
	}
	return 0;
}