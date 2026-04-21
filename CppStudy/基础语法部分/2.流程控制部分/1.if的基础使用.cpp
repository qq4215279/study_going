#include <iostream>

using namespace std;

int main1() {

	// 流程控制if基础使用

	// if (false) {
	// 	cout << "程序执行到这里了" << endl;
	// }

	// 案例1：在控制台上输入一个成绩，如果这个成绩及格了，输出“及格”
	/*
	int score = 0;
	cout << "请输入一个成绩: ";
	cin >> score;

	if (score >= 60) {
		cout << "及格" << endl;
	}
	*/

	// 案例2：C++成绩大于98分，并且mysql的成绩大于80分，老师奖励他一颗糖。或者c++的成绩等于100分，并且mysql的成绩大于70分的，老师也奖励一颗糖。
	int scoreOfCpp = 0, scoreOfMysql = 0;
	cout << "请输入一个C++的成绩: ";
	cin >> scoreOfCpp;
	cout << "请输入一个MySQL的成绩: ";
	cin >> scoreOfMysql;

	if ((scoreOfCpp > 98 && scoreOfMysql > 80) || (scoreOfCpp == 100 && scoreOfMysql > 70)) {
		cout << "奖励一颗糖" << endl;
	}


	return 0;
}