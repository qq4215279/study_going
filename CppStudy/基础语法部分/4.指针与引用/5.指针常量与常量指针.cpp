#include <iostream>

using namespace std;

int main5() {
	int num1 = 10;
	int num2 = 20;

	// 常量指针：
	//     const写在*之前的
	//     其实就是一个指向常量的指针
	//     特点：
	//			1、指针指向的空间的值是不允许修改的
	//			2、指针的指向是可以修改的
	const int* p = &num1;
	// *p = 200;
	p = &num2;		// 修改了指针的指向，指向的是num2

	// 指针常量:
	//		const写在*之后的，是用来修饰指针的，表示这个指针p2是一个常量
	//		特点:
	//			1、指针的指向是不能修改的
	//			2、指针指向的空间的内容是可以修改的
	int* const p2 = &num1;
	// p2 = &num1;	// 尝试修改p2的地址指向，失败。
	*p2 = 200;


	return 0;
}