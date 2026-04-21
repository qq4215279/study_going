//#include <iostream>
//using namespace std;
//
//// 类模板中函数的类外实现
//template<typename T1, typename T2>
//class NumberCalculator {
//private:
//	T1 n1;
//	T2 n2;
//public:
//	NumberCalculator();
//	NumberCalculator(T1 n1, T2 n2);
//
//	void add();
//};
//
//// 类外实现函数，需要定义模板
//template<typename T1, typename T2>
//NumberCalculator<T1, T2>::NumberCalculator() {
//	cout << "NumberCalculator的无参构造函数调用了" << endl;
//}
//template<typename T1, typename T2>
//NumberCalculator<T1, T2>::NumberCalculator(T1 n1, T2 n2) {
//	this->n1 = n1;
//	this->n2 = n2;
//}
//template<typename T1, typename T2>
//void NumberCalculator<T1, T2>::add() {
//	cout << n1 + n2 << endl;
//}
//
//
//int main() {
//
//	NumberCalculator<int, int> cal(10, 20);
//	cal.add();
//
//	return 0;
//}