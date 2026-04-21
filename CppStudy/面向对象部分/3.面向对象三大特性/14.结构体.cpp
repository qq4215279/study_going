//#include <iostream>
//using namespace std;
//
//// 结构体：也是一种自定义的数据类型，基本与类相同的。
//// 结构体与类的不同：
////		成员默认的访问权限不同，类中的成员默认是private权限的，结构体中的成员默认是public权限的
//
//struct Student {
//	// 结构体中可以定义属性
//	string name;
//	int age;
//	int score;
//
//	// 结构体中可以定义构造函数
//	Student() {
//		name = "";
//		age = 0;
//		score = 0;
//	}
//
//	Student(string name, int age, int score): name(name), age(age), score(score) {}
//
//	void study() {
//		cout << "study" << endl;
//	}
//
//	~Student() {
//		cout << "Student的析构函数执行了" << endl;
//	}
//};
//
//
//int main() {
//
//	// 结构体对象创建，创建结构体的时候，关键字struct可以省略不写
//	struct Student xiaobai;
//	struct Student xiaohei = Student("xiaohei", 18, 99);
//	struct Student* xiaohong = new Student();
//	struct Student* xiaolv = new Student("xiaolv", 19, 100);
//
//	// 成员访问
//	xiaobai.name = "xiaobai";
//	xiaohei.age = 10;
//	xiaohong->age = 11;
//	xiaolv->score = 100;
//
//	delete xiaohong;
//	delete xiaolv;
//
//	return 0;
//}