//#include <iostream>
//
//using namespace std;
//
//// 类是一种自定义的数据类型
//class Dog {
//public:
//	string name;
//	int age;
//};
//
//class Person {
//public:
//	string name;
//	int age;
//	Dog pet;		// 以Dog作为Person的一个属性
//
//	// 如果我们用对象指针作为一个类的属性，需要注意空间问题
//	Dog* otherPet;
//};
//
//int main() {
//
//	// 创建一个Person对象
//	Person xiaoming;
//	xiaoming.name = "xiaoming";
//	xiaoming.age = 18;
//	xiaoming.pet.name = "xiaobai";
//	xiaoming.pet.age = 1;
//
//	cout << xiaoming.name << endl;
//	cout << xiaoming.pet.name << endl;
//
//	
//	xiaoming.otherPet = new Dog();
//	xiaoming.otherPet->name = "xiaohei";
//	xiaoming.otherPet->age = 1;
//	cout << xiaoming.otherPet->name << endl;
//	cout << xiaoming.otherPet->age << endl;
//
//
//
//	return 0;
//}