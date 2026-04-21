//#include <iostream>
//
//using namespace std;
//
//// 注意事项:
////		1. 如果我们没有在一个类中写任何的构造函数，系统会为其添加一个public权限的无参构造函数，可以让我们创建对象
////		2. 如果我们给一个类写构造函数了，此时系统将不再提供任何默认的构造函数。
//// 如果我们为一个类写了有参的构造函数了，一般会同时写无参的构造函数。
//
//class Person {
//public:
//	Person(int age) {
//
//	}
//};
//
//int main() {
//
//	// 创建对象
//	Person xiaoming = Person();
//	Person xiaohei;
//
//	return 0;
//}