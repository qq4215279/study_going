//#include <iostream>
//using namespace std;
//
//// 类模板
//template<typename T1, typename T2>
//class NumberCalculator {
//private:
//	T1 n1;
//	T2 n2;
//public:
//	NumberCalculator() {}
//	NumberCalculator(T1 n1, T2 n2): n1(n1), n2(n2) {}
//
//	void showAddResult() {
//		cout << n1 + n2 << endl;
//	}
//
//	void showMinusResult() {
//		cout << n1 - n2 << endl;
//	}
//};
//
//
//// 普通函数中，使用到类模板作为参数，类模板必须要明确类型
//void useCalculator(NumberCalculator<int, int>& op) {
//	op.showAddResult();
//}
//
//// 函数模板中，使用到类模板作为参数的时候，类模板可以明确类型，也可以使用函数模板中的虚拟类型
//template<typename X, typename Y>
//void useCalculator02(NumberCalculator<X, Y>& op) {
//	op.showMinusResult();
//}
//
//int main() {
//
//	// 类模板对象创建的时候，必须手动指定类型，不能再通过推导的方式来确定类型。
//	
//	// 创建对象
//	NumberCalculator<int, int> cal1(10, 20);
//	cal1.showAddResult();
//	cal1.showMinusResult();
//
//	// 创建对象
//	NumberCalculator<double, double> cal2(20, 10);
//	cal2.showAddResult();
//	cal2.showMinusResult();
//
//	useCalculator(cal1);
//
//	useCalculator02(cal2);
//
//	return 0;
//}