#include <iostream>

/*
* ��ӡ�û������ָ����Χ�ڵ��������� (��һ����С�ڵڶ�����)
*/

int main()
{
	std::cout << "Enter two numbers: " << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	int temp = v1;
	while (temp <= v2)
	{
		std::cout << temp << std::endl;
		++temp;
	}
	return 0;
}