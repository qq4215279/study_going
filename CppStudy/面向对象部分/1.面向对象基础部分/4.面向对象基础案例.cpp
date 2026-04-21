//#include <iostream>
//
//using namespace std;
//
//// 面向对象基础案例：判断一个圆是否包含一个点
////
//// 类：圆、点 
////
//// 点类：
////		属性：x, y
////
//// 圆类：
////		属性：圆心、半径
////		功能：判断是否包含一个点
//
//class Point {
//public:
//	double x;
//	double y;
//};
//
//class Circle {
//public:
//	double radius;
//	Point center;
//
//	bool contains(Point point) {
//		// 计算两点距离的平方
//		double dis = (center.x - point.x)* (center.x - point.x) + (center.y - point.y) * (center.y - point.y);
//		// 比较距离平方和半径平方的大小关系
//		return dis <= radius * radius;
//	}
//};
//
//
//int main() {
//
//	// 设计一个点，作为需要比较的点
//	Point point;
//	point.x = 10;
//	point.y = 15.5;
//
//	// 设计一个圆
//	Circle circle;
//	circle.center.x = 10;
//	circle.center.y = 8;
//	circle.radius = 7;
//
//	// 核心业务：判断圆是否包含某一个点
//	cout << circle.contains(point) << endl;
//
//
//	return 0;
//}