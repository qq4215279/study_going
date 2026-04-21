#include <iostream>

using namespace std;

int main3() {

	// 案例：从控制台上输入一个成绩，输出成绩所对应的级别
	// < 0 或者 > 100 : 输出“错误成绩”
	// [0, 60) : 输出“不及格”
	// [60, 80): 输出“中”
	// [80, 90): 输出“良”
	// [90, 100]: 输出“优”

	/*
	int score = 0;
	cout << "请输入一个成绩: ";
	cin >> score;

	if (score < 0 || score > 100) {
		cout << "错误成绩" << endl;
	} 
	else if (score < 60) {
		cout << "不及格" << endl;
	}
	else if (score < 80) {
		cout << "中" << endl;
	}
	else if (score < 90)
	{
		cout << "良" << endl;
	}
	else {
		cout << "优" << endl;
	}
	*/


	// 案例2：从控制台上输入一个字符，判断如果是小写字母，输出对应的大写字母；如果是大写字母，输出对应的小写字母；不是字母的情况，原意输出。
	char c = '0';
	cout << "请输入一个字符: ";
	cin >> c;

	// a 97
	// A 65
	if (c >= 'a' && c <= 'z') {
		cout << (char)(c - 32) << endl;
	}
	else if (c >= 'A' && c <= 'Z') {
		cout << (char)(c + 32) << endl;
	}
	else {
		cout << c << endl;
	}


	return 0;
}