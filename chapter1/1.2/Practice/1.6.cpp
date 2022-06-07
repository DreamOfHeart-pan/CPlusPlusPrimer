//1.6
/*
程序片段:
	std::cout << "The sum of " << v1;
			  << " and " << v2;
			  << " is " << v1 + v2 << std::endl;
	不合法
	原因:分号标志着一条语句的结束，后两条输出语句的<<运算符左侧无ostream对象
*/