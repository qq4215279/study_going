//#include <iostream>
//using namespace std;
//
//// 全局友元函数类外实现：
//// 3. 将类的声明往前提
//template<typename T1, typename T2>
//class NumberCalculator;
//
//// 全局友元函数类外实现：
//// 2. 将函数提到类之前定义
//template<typename T1, typename T2>
//void print(const NumberCalculator<T1, T2>& cal) {
//	cout << "n1 = " << cal.n1 << ", n2 = " << cal.n2 << endl;
//}
//
//template<typename T1, typename T2>
//class NumberCalculator {
//
//	/*
//	* 全局友元函数的类内实现
//	friend void print(const NumberCalculator<T1, T2>& cal) {
//		cout << "n1 = " << cal.n1 << ", n2 = " << cal.n2 << endl;
//	}
//	*/
//
//	// 全局友元函数类外实现：
//	// 1. 在函数的名字后面添加一对尖括号，表示这个是一个模板函数
//	friend void print<>(const NumberCalculator<T1, T2>& cal);
//
//private:
//	T1 n1;
//	T2 n2;
//public:
//	NumberCalculator(T1 n1, T2 n2);
//};
//
//
//
//int main() {
//	NumberCalculator<int, int> cal(20, 30);
//	
//	print(cal);
//
//	return 0;
//}
//
//
//
//template<typename T1, typename T2>
//NumberCalculator<T1, T2>::NumberCalculator(T1 n1, T2 n2)
//{
//	this->n1 = n1;
//	this->n2 = n2;
//}
