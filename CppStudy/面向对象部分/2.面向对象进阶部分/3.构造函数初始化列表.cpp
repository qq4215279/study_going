//#include <iostream>
//
//using namespace std;
//
//class Person {
//public:
//	string name;
//	int age;
//	string gender;
//	int score;
//
//	Person(): name(""), age(0), gender(""), score(0) { }
//	Person(string n, int a, string g, int s): name(n), age(a), gender(g), score(s) {}
//	
//	// 如果出现了形参的名字与属性的名字相同的情况，系统会自动的去识别参数和属性
//	Person(string name, int age, string gender): name(name), age(age), gender(gender) {}
//
//};
//
//int main() {
//
//	Person xiaobai("xiaobai", 19, "male", 99);
//	cout << xiaobai.name << endl;
//	cout << xiaobai.gender << endl;
//	cout << xiaobai.age << endl;
//	cout << xiaobai.score << endl;
//
//	return 0;
//}