//#include <iostream>
//using namespace std;
//
//// 需求：定义一个函数，实现对两个数字的相加的功能
//#if 0
//void add(int a, int b) { 
//	cout << a + b << endl; 
//}
//void add(double a, double b) {
//	cout << a + b << endl;
//}
//void add(int a, double b) {
//	cout << a + b << endl;
//}
//void add(double a, int b) {
//	cout << a + b << endl;
//}
//#endif
//// 那么现在如果我需要再添加上字符类型的相加，是不是还需要再写函数呢？
//// 如果我需要相加的参数的数量增多，需要设计的函数也就会越来越多 
//// 而且一旦需求发生变更，运算逻辑需要进行一些小小的改动，每一个函数都得修改，非常繁琐
////
//// 如果我能够设计一个通用的函数，将数据类型以“参数”的形式传入到函数的内部，让函数适配不同的数据类型
//// 这就是函数模板
//
//// template：定义模板的关键字
//// typename：定义虚拟类型的关键字，可以被替换为class
//// T, M：定义的虚拟类型
//// 虚拟类型可以有默认的类型
//template<typename T, typename M = int>
//void add(T n1, M n2) {
//	cout << n1 + n2 << endl;
//}
//
//template<typename T>
//void mySwap(T& n1, T& n2) {
//	T tmp = n1;
//	n1 = n2;
//	n2 = tmp;
//}
//
//template<typename R, typename T1, typename T2>
//R calculate(T1 x, T2 y) {
//	return (R)(x + y);
//}
//
//
//int main() {
//
//	// 函数模板的使用，可以有两种方式:
//	// 1. 显式指定类型
//	add<int, double>(10, 3.14);
//	add<double, int>(3.14, 10);
//	add<int, int>(10, 20);
//	add<double, double>(3.14, 9.99);
//
//	// 2. 可以根据实参进行类型的自动推导
//	add(10, 3.14);		// 根据实参推导类型，由10可以推导出int，由3.14可以推导出double
//	add(3.14, 10);		// 根据实参推导类型，由3.14可以推导出double，由10可以推导出int
//	add('a', 'b');		// 根据实参推导类型，由'a'可以推导出char，由'b'可以推导出char
//
//	// 注意事项：在进行类型推导的时候，需要注意一致性的问题。对于同样的虚拟类型，不能推导出不同的实际类型。
//	double x = 10;
//	double y = 20;
//	mySwap(x, y);		
//	cout << "x = " << x << ", y = " << y << endl;
//
//
//	// 3. 调用函数模板的时候，如果手动指定虚拟类型的实际类型，此时可以不完全指定。
//	//    实际给的类型，按照虚拟类型列表中的顺序去指定，没有指定的虚拟类型，将按照实参的类型来推导。
//	add<int>(10, 3.14);
//
//	// 4. 调用函数的时候，只能根据实参来推导形参的数据类型。
//	//    如果你的虚拟类型是用在返回值部分的，必须手动指定。
//	int res = calculate<int>(3.14, 9.99);
//	cout << res << endl;
//
//	return 0;
//}