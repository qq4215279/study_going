//#include <iostream>
//using namespace std;
//
//// 模板类中的虚拟类型是不能够继承的！
//template<typename T>
//class Animal {
//public:
//	T arg;
//};
//
//// 普通的类来继承类模板，需要指定父类中的虚拟类型
//class Dog : public Animal<int> {
//
//};
//
//// 类模板继承类模板
//template<typename E>
//class Cat : public Animal<E> {
//
//};
//
//int main() {
//
//	Dog xiaobai;
//	xiaobai.arg = 10;
//
//	Cat<string> xiaohei;
//	xiaohei.arg = "abc";
//
//	return 0;
//}