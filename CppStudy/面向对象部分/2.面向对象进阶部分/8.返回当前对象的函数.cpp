//#include <iostream>
//
//using namespace std;
//
//// this: 设计函数，返回对象本身
//
//class MyNumber {
//private:
//	int n;
//
//public:
//	MyNumber() :n(0) {}
//	MyNumber(int n): n(n) {}
//
//	void display() {
//		cout << n << endl;
//	}
//
//	// 设计一个函数，累加上一个数字，返回对象本身
//	MyNumber& add(int n) {
//		this->n += n;
//		return *this;
//	}
//
//	MyNumber& minus(int n) {
//		this->n -= n;
//		return *this;
//	}
//};
//
//
//int main() {
//
//	MyNumber n;
//	// 每一次的函数调用，得到了自己（n）
//	n.add(10).add(1).minus(5).add(1).display();
//
//	return 0;
//}