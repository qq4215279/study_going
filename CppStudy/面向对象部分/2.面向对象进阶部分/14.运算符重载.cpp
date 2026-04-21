//#include <iostream>
//using namespace std;
//
//class Point {
//public:
//	int x;
//	int y;
//
//	Point(): x(0), y(0) {}
//	Point(int x, int y): x(x), y(y) {}
//
//	// 在类内，以成员函数的形式重载运算符的时候，参数的数量应该少一个
//	// 此时，参与减法运算的是 this, p  
//	Point operator-(const Point& p) {
//		return { x - p.x, y - p.y };
//	}
//
//	Point operator--() {
//		x--;
//		y--;
//		return *this;
//	}
//	Point operator--(int) {
//		Point tmp = *this;
//		x--;
//		y--;
//		return tmp;
//	}
//};
//
//// 重载的运算符+
//// 参与相加的对象是p1和p2
//// 相加结果也是Point对象
//Point operator+(const Point& p1, const Point& p2) {
//	return { p1.x + p2.x, p1.y + p2.y };
//}
//
//// 运算符前置，先运算、后取值
//Point operator++(Point& p) {
//	p.x++;
//	p.y++;
//	return p;
//}
//
//// 运算符后置，先取值，后运算
//Point operator++(Point& p, int) {
//	// 创建出来一个新的Point对象，目的是为了存储之前的值
//	Point tmp = p;
//	p.x++;
//	p.y++;
//	return tmp;
//}
//
//
//int main() {
//
//	// 创建两个点对象
//	Point p1(10, 20);
//	Point p2(5, 15);
//
//	Point p3 = p1 + p2;
//	cout << "p3.x = " << p3.x << ", p3.y = " << p3.y << endl;
//
//	Point p4 = p1 - p2;
//	cout << "p4.x = " << p4.x << ", p4.y = " << p4.y << endl;
//
//	Point p5 = --p1;
//	cout << "p5.x = " << p5.x << ", p5.y = " << p5.y << endl;
//	cout << "p1.x = " << p1.x << ", p1.y = " << p1.y << endl;
//
//	return 0;
//}