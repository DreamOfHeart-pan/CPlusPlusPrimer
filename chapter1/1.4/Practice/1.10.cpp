#include <iostream>

/*
* ʹ�� -- �� while �ݼ���ӡ 10 �� 0
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