#include <iostream>


//Practice 1.7 - 1.8
//1.7 /*/**/*/ 语法错误

//1.8
int main()
{
	std::cout << "/*";
	std::cout << "*/";
	//std::cout << /* "*/" */; //报错
	std::cout << /* "*/" */"; //改正
	std::cout << /* "*/" /* "/*" */;
	return 0;
}