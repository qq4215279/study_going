//#include <iostream>
//using namespace std;
//
//class Person {
//	// 将这个重载运算符的函数作为友元函数，因为我们需要在这个函数中访问到私有的成员
//	friend ostream& operator<<(ostream& os, const Person& p);
//private:
//	string name;
//	int age;
//	string gender;
//	int* score;
//
//public:
//	Person(): name(""), age(0), gender(""), score(nullptr) {}
//	Person(string name, int age, string gender, int score) : name(name), age(age), gender(gender), score(new int(score)) {}
//
//	Person(const Person& p) {
//		name = p.name;
//		age = p.age;
//		gender = p.gender;
//		score = new int(*p.score);
//	}
//
//	Person& operator=(const Person& p) {
//		name = p.name;
//		age = p.age;
//		gender = p.gender;
//		score = new int(*p.score);
//	}
//
//	~Person() {
//		if (score != nullptr) {
//			delete score;
//			score = nullptr;
//		}
//	}
//
//};
//
//// 在类外定义运算符重载 <<
//ostream& operator<<(ostream& os, const Person& p) {
//	os << "name = " << p.name << ", age = " << p.age << ", gender = " << p.gender << ", score = " << *p.score;
//	return os;
//}
//
//int main() {
//
//	// 创建对象
//	Person xiaoming("xiaoming", 10, "male", 99);
//	cout << xiaoming << endl;
//
//	Person xiaobai("xiaobai", 20, "female", 100);
//	cout << xiaobai << endl;
//
//	// 虽然在这里，确实用到了等号运算符，但是由于xiaohei还没有完成空间开辟、实例化，所以在这里其实调用的是拷贝构造函数
//	Person xiaohei = xiaobai;
//
//	// 在这里，因为xiaohei已经完成了空间开辟了，于是这里调用的才是赋值运算符
//	xiaohei = xiaobai;
//
//	return 0;
//}