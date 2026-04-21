//#include <iostream>
//using namespace std;
//
//// 函数模板和普通函数在调用的时候需要注意：
////		1、普通函数调用，是可以发生自动类型转换的。函数模板的调用，不会发生数据类型转换。
////		2、如果在调用函数的时候，实参既可以匹配普通函数，又可以匹配函数模板，优先调用普通函数。
//
//template<typename T>
//int add(T n1, T n2) {
//	cout << "函数模板调用了" << endl;
//	return n1 + n2;
//}
//
//// 普通函数定义
//int add(int n1, int n2) {
//	cout << "普通函数调用了" << endl;
//	return n1 + n2;
//}
//
//
//int main() {
//	int n = 10;
//	char c = 'a';
//	add(n, c);		// 这里发生了类型转换，c已经被转换成了int了 
//
//	// add(n, c);		// 这里调用模板函数会出错，因此无法进行类型转换的
//
//	add(10, 20);
//
//	return 0;
//}