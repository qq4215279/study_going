//#include <iostream>
//
//using namespace std;
//
//// 面向对象基础案例：老师让学生做自我介绍
//// 
//// 类：老师类、学生类
//// 
//// 学生：
////		属性：名字、年龄、性别、成绩
////		功能：自我介绍
//// 
//// 老师：
////		属性：姓名
////		功能：让学生做自我介绍
//
//class Student {
//public:
//	string name;
//	int age;
//	string gender;
//	int score;
//
//	void introduceSelf() {
//		cout << "大家好，我叫" << name << "，我今年" << age << "岁了，我的性别是" << gender << "，我这次考试考了" << score << "分，谢谢" << endl;
//	}
//};
//
//class Teacher {
//public:
//	string name;
//
//	// 让学生做自我介绍，学生的对象由参数输入
//	void makeIntroduce(Student s) {
//		s.introduceSelf();
//	}
//};
//
//int main() {
//
//	// 创建一个学生对象
//	Student xiaoming;
//	xiaoming.name = "xiaoming";
//	xiaoming.gender = "male";
//	xiaoming.age = 18;
//	xiaoming.score = 99;
//
//	// 创建一个老师对象
//	Teacher laowang;
//	laowang.name = "laowang";
//
//	// 核心业务，老师让学生做自我介绍
//	laowang.makeIntroduce(xiaoming);
//
//	return 0;
//}