#include <iostream>

/*
int main() {
	// 控制台输入：读取控制台上输入的内容，并且给某一个变量进行赋值
	// cin

	// 整型的数字
	// int n1 = 0;
	// std::cout << "请输入一个整型的数字: ";
	// std::cin >> n1;
	// std::cout << "n1 = " << n1 << std::endl;

	// 浮点型的数字
	// float n1 = 0;
	// std::cout << "请输入一个浮点型的数字: ";
	// std::cin >> n1;
	// std::cout << "n1 = " << n1 << std::endl;

	// 布尔型的变量
	// bool n1 = false;
	// std::cout << "请输入一个布尔值: ";
	// std::cin >> n1;
	// std::cout << "n1 = " << n1 << std::endl;
	
	// 字符型的变量
	// char n1 = 0;
	// std::cout << "请输入一个字符: ";
	// std::cin >> n1;
	// std::cout << "n1 = " << n1 << std::endl;

	// 字符串类型的变量
	// std::string n1 = "";
	// std::cout << "请输入一个字符串: ";
	// std::cin >> n1;
	// std::cout << "n1 = " << n1 << std::endl;


	// 1. 缓冲区的问题
	//    其实我们在控制台上输入的内容，是被暂存到了一个“缓冲区”，cin从缓冲区取数据给变量进行赋值。
	//    cin.ignore();
	//    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// int num1 = 0; 
	// float num2 = 0;
	// std::string num3 = "";
	// std::cin >> num1;
	// std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	// std::cin >> num2;
	// std::cin >> num3;
	// 
	// std::cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << std::endl;

	// 2. 连续输入
	// int num1 = 0, num2 = 0, num3 = 0;
	// std::cin >> num1 >> num2 >> num3;
	// std::cout << "num1 = " << num1 << ", num2 = " << num2 << ", num3 = " << num3 << std::endl;

	// 3. 错误处理
	//    cin内部会维护一个状态，来记录本次的读取操作是否正常
	//    cin.good()
	//    cin.fail()
	//
	//    如果被标记为fail状态，则会影响后续的读取操作
	//    cin.clear() 恢复状态，清除错误状态
	int num1 = 0;
	std::cout << "请输入一个整型的数字: ";
	std::cin >> num1;
	std::cout << "num1 = " << num1 << std::endl;
	std::cout << "good = " << std::cin.good() << ", fail = " << std::cin.fail() << std::endl;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	int num2 = 123;
	std::cout << "请输入一个整型的数字: ";
	std::cin >> num2;
	std::cout << "num2 = " << num2 << std::endl;


	return 0;
}
*/