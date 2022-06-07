#include <iostream>

/* std::cin >> value 作为循环条件，实际检测的为std::cin
*  效果为检测流的状态，如果流是有效的，则检测成功。
*  当遇到文件结束符(end-of-file)，或遇到一个微小的输入时(例如读入的值不是一个整数)，
*  istream的状态会变为无效
*  Windows 文件结束 ctrl + z + enter
*/

int main()
{
	int sum = 0, value = 0;
	//读取数据直到遇到文件尾，计算所有读入的值的和
	while (std::cin >> value)
	{
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;
	return 0;
}