#include <iostream>

//常见错误报错 VS

//语法错误 (syntax error) 
int main() //main参数列表漏掉 "main" 不能用作全局变量名或给定 C 语言的链接	
{
	//std::cout << "Read each file." << std::endl: //缺少";"(在":"的前面)
	//std::cout << Update master. << std::endl; //未定义标识符 语法错误"<<"等
	//std::cout << "Write new master" std::endl; //缺少";"

	//return 0 //缺少";"

	//类型错误 (type error)
	//int a = "hello"; //"const char*" 类型的值不能用于初始化"int"类型的实体

	//声明错误 (declaration error)
	//int v1 = 0;
	//std::cin >> v;//未定义标识符v
	
	//cout << 1 << std::endl; //未定义标识符cout



	return 0;
}