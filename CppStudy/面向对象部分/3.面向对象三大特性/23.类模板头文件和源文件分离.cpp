//#include <iostream>
//using namespace std;
//
//// #include "NumberCalculator.cpp"
//#include "NumberCalculator.hpp"
//
//int main() {
//
//	// 创建对象
//	NumberCalculator<int, int> cal;
//
//	// 问题出现的原因:
//	// 虽然我们引入了.h文件，但是模板类中的函数是在调用的时候才创建的。因此在编译阶段编译器不会管.cpp文件中对应的实现部分。
//	// 而到了我们使用这个函数的时候，发现这个函数已经创建了，声明完成，但是没有实现，因此就报错了。
//	// 相当于我们只在.h文件中声明了函数，但是没有实现。
//	//
//	// 如何解决这个问题：
//	// 1. 使用#include引入.cpp文件
//	// 2. 将类的声明和实现部分放到一个文件中，这个文件习惯性的会定义为.hpp文件
//
//	return 0;
//}