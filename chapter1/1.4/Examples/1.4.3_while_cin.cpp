#include <iostream>

/* std::cin >> value ��Ϊѭ��������ʵ�ʼ���Ϊstd::cin
*  Ч��Ϊ�������״̬�����������Ч�ģ�����ɹ���
*  �������ļ�������(end-of-file)��������һ��΢С������ʱ(��������ֵ����һ������)��
*  istream��״̬���Ϊ��Ч
*  Windows �ļ����� ctrl + z + enter
*/

int main()
{
	int sum = 0, value = 0;
	//��ȡ����ֱ�������ļ�β���������ж����ֵ�ĺ�
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}