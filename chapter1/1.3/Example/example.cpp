#include <iostream>

//1.3
//Example

/*
* 简单主函数：
* 读取两个数，求他们的和
*/
int main()
{
	//提示用户输入两个数
	std::cout << "Enter two numbers:" << std::endl;
	int v1 = 0, v2 = 0; //保存我们读入的输入数据的变量
	std::cin >> v1 >> v2; //读取输入数据
	std::cout << "The sum of " << v1 << " and " << v2 << " is " << v1 + v2 << std::endl;

	return 0;
}

//注释对/* */ 不能嵌套
//单行注释中的任何内容都会被忽略
////包括嵌套的注释也一样会被忽略